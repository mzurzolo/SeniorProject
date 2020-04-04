import React, {Component} from 'react';
import GameType from '../../containers/forms/GameSelection';
import './GameMenu.css';

export default class GameMenu extends Component {
  render() {
    return (
      <div id='gameMenu'>
        <GameType />
      </div>
    );
  }
}
