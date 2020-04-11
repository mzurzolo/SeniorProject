import React, {Component} from 'react';
import NavBar from '../../containers/media/Navbar.jsx';
import axios from 'axios';



export default class UserProfile extends Component {

  async Call(){
  const curr_user = axios.get('/d/acct/profile/').then((res) => {
    if (res.status === 200) {
      const curr_user_data = res.data;
      return curr_user_data;
    }
});}

 render() {
    return (
      <div id='userprofile'>
          <NavBar/>
      <h1>User Profile </h1>
      <h2>Username: {curr_user.username}</h2>
      <h2><span> Email: {curr_user.email}</span></h2>
      <h2><span> UUID: </span></h2>
      </div>
    );
  }
}
