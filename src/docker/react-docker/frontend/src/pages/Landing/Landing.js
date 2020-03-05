import React, { Component } from 'react';
import './Landing.css';

import Login from '../../containers/login';
import GameDescription from '../../containers/GameDescription';
import GamePicture from '../../containers/GamePicture';
import Leaderboard from '../../containers/Leaderboard';


export default class Landing extends Component {
  state = {

  };

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

