import React, {Component} from 'react';
import Game from '../../containers/media/GamePlay';
import './GamePlay.css';

export default class GamePlay extends Component {
  render() {
    return (
      <div id='game'>
        <Game/>
      </div>
    );
  }
}
