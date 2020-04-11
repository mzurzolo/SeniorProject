import React, {Component} from 'react';
import NavBar from '../../containers/media/Navbar.jsx';
import axios from 'axios';



export default class UserProfile extends Component {
 render() {
  axios.get('/d/acct/profile/').then((res) => {
    if (res.status === 200) {
      const curr_user = res.data;
      var username = curr_user.username;
      var email = curr_user.email;
    }
});
    return (
      <div id='userprofile'>
          <NavBar/>
      <h1>User Profile </h1>
      <h2>Username: {username} </h2>
      <h2><span> Email: {email}</span></h2>
      <h2><span> UUID: </span></h2>
      </div>
    );
  }
}
