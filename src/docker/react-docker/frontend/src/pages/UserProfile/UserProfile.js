import React, { Component } from 'react';
import NavBar from '../../containers/media/Navbar.jsx';
//import axios from 'axios';
// axios.get('/d/acct/profile/').then((res) => {
      //if (res.status === 200) {
         // const curr_user = res.data;
         //})
         
export default class UserProfile extends Component {

  state = {
   profile: []
  }
  async componentDidMount() {
  try {
    const res = await fetch('/acct/profile/')
    const profile = await res.json();
    var username = profile.username;
    var email = profile.email;
    this.setState({
      profile
    });
    
    window.alert(5 + 6);
  } catch (e) {
    console.log(e);
  }
  }
  render() {
    return (
      <div id='userprofile'>
        <NavBar/>
        <h1>User Profile </h1>
        <h2>Username:{username}</h2>
        <h2>Email: {email}</h2>
        <h2>UUID: </h2>
      </div>
    );
  }
}

