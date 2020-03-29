import React, {Component} from 'react';
import NavBar from '../../containers/media/Navbar.jsx';

export default class UserProfile extends Component {
  render() {
    return (
      <div id='userprofile'>
        <NavBar/>
        <h1>User Profile</h1>
      </div>
    );
  }
}
