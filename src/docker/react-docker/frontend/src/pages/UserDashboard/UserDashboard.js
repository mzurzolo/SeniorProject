import React, {Component} from 'react';
import NavBar from '../../containers/media/Navbar.jsx';
import Leaderboard from '../../containers/media/Leaderboard';
import './UserDashboard.css';
import {useHistory} from 'react-router-dom';
import axios from 'axios';

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
            this.props.history.push('/GameSelection')}>Play Game</button>
        </div>
        <Leaderboard/>
      </div>
    );
  }
}
