import React, {Component} from 'react';
import NavBar from '../../containers/media/Navbar.jsx';
import axios from 'axios';



export default class UserProfile extends Component {
 render() {
  axios.get('/d/acct/profile/').then((res) => {
    if (res.status === 200) {
      const curr_user = res.data;
    }
});
    return (
      <div id='userprofile'>
          <NavBar/>
      <div key={curr_user.id}>
      <h1>User Profile </h1>
      <h2>Username: {curr_user.username} </h2>
      <h2>Email: {curr_user.email} </h2>
      <h2>UUID: </h2>
      </div>
      </div>
    );
  }
}
