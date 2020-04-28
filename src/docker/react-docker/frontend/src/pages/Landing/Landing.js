import React, {Component} from 'react';
import './Landing.css';
import axios from 'axios';
import Login from '../../containers/forms/login';
import GameDescription from '../../containers/media/GameDescription';
import GamePicture from '../../containers/media/GamePicture';
import Leaderboard from '../../containers/media/Leaderboard';
import {useHistory} from 'react-router-dom';


export default class Landing extends Component {
  render() {
    return (
      <div id='landing'>
        <GameDescription />
        <Login />
        <GamePicture />
        <Leaderboard />
      </div>
    );
  }
}
