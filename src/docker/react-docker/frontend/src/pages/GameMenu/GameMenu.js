import React, {Component} from 'react';
import GameSelection from '../../containers/forms/GameSelection';
import GameDescription from '../../containers/media/GameDescription';
import './GameMenu.css';

import {
  withRouter,
} from 'react-router';
import NavBar from '../../containers/media/Navbar.jsx';

class GameMenu extends Component {
  render() {
    return (
      <div id='gamemenu'>
        <NavBar/>
        <GameDescription />
        <GameSelection />
      </div>
    );
  }
}
export default withRouter(GameMenu);
