import React, {Component} from 'react';
import GameSelection from '../../containers/forms/GameSelection';
import GameDescription from '../../containers/media/GameDescription';
import './GameMenu.css';
import axios from 'axios';
import {withRouter} from 'react-router';
import NavBar from '../../containers/media/Navbar.jsx';

class GameMenu extends Component {
  constructor(props) {
    super(props);
    axios.get('/d/acct/profile/').then((res) => {
      if (res.status === 403) {
        void(0);
      }
    }).catch((error) => {
      this.props.history.push('/');
    });
  }
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
