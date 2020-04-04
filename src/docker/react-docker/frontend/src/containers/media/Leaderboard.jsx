import React from 'react';
import './Leaderboard.css';
import axios from 'axios';

export default class Leaderboard extends React.Component {
  constructor(props) {
    super(props);
    this.state = {
      games: [],
    };
  }
  async componentDidMount() {
    axios.get(`/d/game/leaderboard/`)
        .then((res) => {
          const games = res.data;
          this.setState({
            games,
          });
        });
  }


  render() {
    return (
      <div id = 'leaderboard' >
        <div id = 'title' >
          <h2 > Leaderboard < /h2>
        </div>
        <table>
          <tr>
            <th>User</th>
            <th>Wins</th>
          </tr>
          <tbody>
            {
              this.state.games.map((game, index) =>{
                if (index === this.state.games.length - 1) {
                  return <tr><td>{game.username}</td><td>{game.num_wins}</td></tr>;
                }
                return (
                  <>
                    <tr>game.username</tr>
                    <tr/>
                  </>
                );
              })
            }
          </tbody>
        </table>
      </div>
    );
  }
}
