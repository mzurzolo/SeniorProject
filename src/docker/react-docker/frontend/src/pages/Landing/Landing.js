import React, {Component} from 'react';
import './Landing.css';

import Login from '../../containers/forms/login';
import GameDescription from '../../containers/media/GameDescription';
import GamePicture from '../../containers/media/GamePicture';
import Leaderboard from '../../containers/media/Leaderboard';
import axios from 'axios';

export default class Landing extends Component {
  constructor(props) {
    super(props);
    axios.get('/d/acct/profile/').then((res) => {
      if (res.status === 200) {
        this.props.history.push('/Dashboard');
      }
    });
  }



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
