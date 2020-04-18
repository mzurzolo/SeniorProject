import React, { Component } from 'react';
import NavBar from '../../containers/media/Navbar.jsx';
//import axios from 'axios';
// axios.get('/d/acct/profile/').then((res) => {
      //if (res.status === 200) {
         // const curr_user = res.data;
         //})
         
export default class UserProfile extends Component {
  async componentDidMount() {
  fetch(/acct/profile/)
    .then(function (response) {
      // The JSON data will arrive here
      return response.json();
    })
    .then(function (data) {
      appendData(data);
    })
    .catch(function (err) {
      // If an error occured, you will catch it here
      console.log("THIS DIDN'T WORK")
    });
}
  render() {
    return (
      <div id='userprofile'>
        <NavBar/>
        <h1>User Profile </h1>
        <h2>Username:</h2>
        <h2>Email:</h2>
        <h2>UUID: </h2>
      </div>
    );
  }
}

