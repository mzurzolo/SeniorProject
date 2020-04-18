import React, { Component } from 'react';
import NavBar from '../../containers/media/Navbar.jsx';
//import axios from 'axios';
// axios.get('/d/acct/profile/').then((res) => {
      //if (res.status === 200) {
         // const curr_user = res.data;
         //})
         
export default class UserProfile extends Component {
  async componentDidMount() {
  try {

    const res = await fetch('/acct/profile/')
    const profile = await res.json();
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
        <NavBar />
        {this.profile.map(item => (
          <div key={item.id}>
        <h1>User Profile </h1>
        <h2>Username:{item.username}</h2>
        <h2>Email: {item.email}</h2>
        <h2>UUID: </h2>
      </div>
        ))}
    </div>
    );
  }
}

