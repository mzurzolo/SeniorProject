import React, { Component } from 'react';
import NavBar from '../../containers/media/Navbar.jsx';
import axios from 'axios';

export default class UserProfile extends Component {
  async componentdidMount() {
    axios.get('/d/acct/profile/').then((res) => {
      if (res.status === 200) {
          const curr_user = res.data;
      }
    })
  }
  render() {
    return (
      <div id='userprofile'>
        <NavBar />
        <h1>User Profile </h1>
        <h2>Username:</h2>
        <h2>Email: </h2>
        <h2>UUID: </h2>
      </div>
    );
  }
}

