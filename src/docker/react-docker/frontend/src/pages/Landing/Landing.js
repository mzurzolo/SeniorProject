import React, {Component} from 'react';
import './Landing.css';
import Login from '../../containers/forms/login';
import GameDescription from '../../containers/media/GameDescription';
import GamePicture from '../../containers/media/GamePicture';
import Leaderboard from '../../containers/media/Leaderboard';
import NavBar from '../../containers/media/Navbar.jsx';
import axios from 'axios';

export default class Landing extends Component {
  render() {
    return (
      <div id='landing'>
        <NavBar/>
        <GameDescription />
        <Login />
        <GamePicture />
        <Leaderboard />
      </div>
    );
  }
}
