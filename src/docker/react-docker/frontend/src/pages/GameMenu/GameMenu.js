import React, {Component} from 'react';
import GameSelection from '../../containers/forms/GameSelection';
import './GameMenu.css';
import {
  withRouter,
} from 'react-router';

class GameMenu extends Component {
  render() {
    return (
      <div id='gameMenu'>
        <GameSelection />
      </div>
    );
  }
}
export default withRouter(GameMenu);
