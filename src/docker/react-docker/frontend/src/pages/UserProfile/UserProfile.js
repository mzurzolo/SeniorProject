import React, {Component} from 'react';
import NavBar from '../../containers/media/Navbar.jsx';
import axios from 'axios';



export default class UserProfile extends Component {

 render() {
   axios.get('/d/acct/profile/').then((res) => {
  if (res.status === 200) {
    const curr_user = res.data;
    // now you can do things with profile data,
    // like const_curr_user_username = curr_user.username;
  }
});
const_curr_user_username = curr_user.username;
const_curr_user_email = curr_user.email;
    return (
          <div id='userprofile'>
            <NavBar/>
        <h1>User Profile </h1>
        <h2>Username: {const_curr_user_username} </h2>
        <h2><span> Email: {const_curr_user_email}</span></h2>
        <h2><span> UUID: </span></h2>
        </div>
    );
  }
}
