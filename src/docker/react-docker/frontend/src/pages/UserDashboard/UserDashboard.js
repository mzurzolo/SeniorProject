import React, {Component} from 'react';
import NavBar from '../../containers/media/Navbar.jsx';
import Leaderboard from '../../containers/media/Leaderboard';
import GameHistory from '../../containers/media/GameHistory';
import './UserDashboard.css';
import {useHistory} from 'react-router-dom';
import axios from 'axios';
import { Container } from '@material-ui/core';

export default class UserDashboard extends Component {
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
      <div id='dashboard'>
        <NavBar/>
        <div id='startgame'>
          <button block bsSize="small" type="button" onClick={() =>
            this.props.history.push('/GameMenu')}>Play Game</button>
        </div>
        <Leaderboard/>
        <GameHistory/>
      </div>
    );
  }
}
