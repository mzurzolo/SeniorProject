import React from 'react';
import './leaderboard.css';

export default class Leaderboard extends React.Component {
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

        <div className='player'>
          <p>Player 1</p>
          <p>101,293</p>
        </div>

        <div className='player'>
          <p>Player 2</p>
          <p>98,423</p>
        </div>

        <div className='player'>
          <p>Player 3</p>
          <p>93,947</p>
        </div>

        <div className='player'>
          <p>Player 4</p>
          <p>87,305</p>
        </div>

        <div className='player'>
          <p>Player 5</p>
          <p>84,590</p>
        </div>
      </div>
    );
  }
}
