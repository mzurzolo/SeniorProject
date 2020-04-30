import React from 'react';
import './GameLosses.css';

export default function GameLosses() {
    return (
        <div id = 'gamewins' >
          <div id = 'title' >
            <h2>Games Won</h2>
          </div>
          <table>
            <tr>
              <th>GameID</th>
              <th>Player 1</th>
              <th>Player 2</th>
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
