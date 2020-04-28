import React, {Component} from 'react';
import './Landing.css';
import axios from 'axios';
import Login from '../../containers/forms/login';
import GameDescription from '../../containers/media/GameDescription';
import GamePicture from '../../containers/media/GamePicture';
import Leaderboard from '../../containers/media/Leaderboard';
import {useHistory} from 'react-router-dom';


export default class Landing extends Component {
  async componentDidMount() {
    const history = useHistory();
  axios.get('/d/acct/profile/').then((res) => {
    if (res.status === 200) {
      history.push('/Dashboard');
    }
    }).catch(function(error) {
        alert('Invalid request! \n' + error);
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
