import React from 'react';
import './Leaderboard.css';
import axios from 'axios';

export default class Leaderboard extends React.Component {
  
  
  state = {
    games: []
  }

  componentDidMount() {
    axios.get(`/d/game/leaderboard/`)
      .then(res => {
        const games = res.data;
        this.setState({ games });
      })
  }
  
  
  render() {
    return (
      <div id='leaderboard'>
        <div id='title'>
          <h2>Leaderboard</h2>
        </div>

        <div id='columns'>
          <h3>Player</h3>
          <h3>Score</h3>
        </div>

        <ul>
        { this.state.games.map(game => <li>{game.username}</li>)}
      </ul>
      <ul>
        { this.state.games.map(game => <li>{game.num_wins}</li>)}
      </ul>
        
      </div>
    );
  }
}
