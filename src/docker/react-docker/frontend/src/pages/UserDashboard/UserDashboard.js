import React, {Component} from 'react';
import NavBar from '../../containers/media/Navbar.jsx';
import Leaderboard from '../../containers/media/Leaderboard';
import './UserDashboard.css';

export default class UserDashboard extends Component {
  render() {
    return (
      <div id='dashboard'>
        <NavBar/>
        <div id='startgame'>
          <button block bsSize="small" type="button" onClick={() => 
              this.props.history.push('/Game')}>Start Game</button>
        </div>
        <Leaderboard/>
      </div>
    );
  }
}
