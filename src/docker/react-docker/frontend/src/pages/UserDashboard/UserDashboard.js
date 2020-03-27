import React, {Component} from 'react';
import NavBar from '../../containers/media/Navbar.jsx';

export default class UserDashboard extends Component {
  render() {
    return (
      <div id='dashboard'>
        <NavBar/>
        <h1>Dashboard</h1>
        <button block bsSize="small" type="button" onClick={() => this.props.history.push('/Game')}>Start Game
        </button>
      </div>
    );
  }
}
