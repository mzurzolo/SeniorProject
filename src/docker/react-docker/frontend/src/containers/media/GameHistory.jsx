import React from 'react';
import './GameHistory.css';
import axios from 'axios';

export default class GameHistory extends React.Component {
  constructor(props) {
    super(props);
    this.state = {
      games: [],
    };
  }
  async componentDidMount() {
    const games = await axios.get(`/d/game/completed_games/`)
        .then((res) => {
          const games_response = res.data;
          const games = games_response.map(async function(game) {
            const gamestate = await axios.get('/d/user/' + game.winner + '/').then((res) => {
              if (res.status === 200) {
                const user = res.data;
                game.winner = user.username;
                return game;
              }
            });
            return gamestate;
          });
          return Promise.all(games);
        });
    this.setState({
      games: games,
    });
  }


  render() {
    return (
      <div id = 'gamehistory' >
        <div id = 'title' >
          <h3>Play History</h3>
        </div>
        <table>
          <tr>
            <th>GameID</th>
            <th>Winner</th>
            <th>Date Finished</th>
          </tr>
          <tbody>
            {
              this.state.games.map((gamehist) =>{
                return <tr><td>{gamehist.id}</td><td>{gamehist.winner}</td><td>{gamehist.date_completed}</td></tr>;
              })
            }
          </tbody>
        </table>
      </div>
    );
  }
}
