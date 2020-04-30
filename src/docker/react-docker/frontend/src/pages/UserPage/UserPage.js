import React, {Component} from 'react';
import UserProfile from '../../containers/forms/UserProfile';
import Navbar from '../../containers/media/Navbar.jsx';
import './UserPage.css';

export default class UserPage extends Component {
  render() {
    return (
      <div id='userpage'>
        <Navbar />
        <UserProfile/>
      </div>
    );
  }
}
