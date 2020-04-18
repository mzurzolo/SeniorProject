import React, { Component } from 'react';
import NavBar from '../../containers/media/Navbar.jsx';
import axios from 'axios';



export default class UserProfile extends Component {
  render() {
    axios.get('/d/acct/profile/').then((res) => {
      if (res.status === 200) {
        console.log("this is working!")
        const curr_user = res.data;
        const curr_username = curr_user.username;
        const curr_email = curr_user.email;
      }
      return (
        <div id='userprofile'>
          <NavBar />
          <h1>User Profile </h1>
          <h2>Username: {curr_username}</h2>
          <h2>Email: </h2>
          <h2>UUID: </h2>
        </div>
      );
    })
  }
}

