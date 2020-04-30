import React from 'react';
import './Leaderboard.css';
import axios from 'axios';

export default class GameHistory extends React.Component {
  constructor(props) {
    super(props);
    this.state = {
      games: [],
    };
  }
  async componentDidMount() {
    await axios.get(`/d/game/leaderboard/`)
        .then((res) => {
          const games = res.data;
          this.setState({
            gamehist,
          });
        });
  }


  render() {
    return (
      <div id = 'gamehistory' >
        <div id = 'title' >
          <h2>Games Played</h2>
        </div>
        <table>
          <tr>
            <th>Player</th>
            <th>Score</th>
          </tr>
          <tbody>
            {
              this.state.games.map((gamehist) =>{
                return <tr><td>{game.username}</td><td>{game.num_wins}</td></tr>;
              })
            }
          </tbody>
        </table>
      </div>
    );
  }
}
