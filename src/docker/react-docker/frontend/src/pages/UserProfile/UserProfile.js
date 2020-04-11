import React, {Component} from 'react';
import NavBar from '../../containers/media/Navbar.jsx';
import axios from 'axios';



export default class UserProfile extends Component {
  async UserInfo() {
    axios.get('/d/acct/profile/').then((res) => {
      if (res.status === 200) {
        const curr_user = res.data;
        curr_user.username = myusername;
      }
});
  }
 render() {
    return (
          <div id='userprofile'>
            <NavBar/>
        <h1>User Profile </h1>
        <h2>Username: {myusername} </h2>
        <h2><span> Email: </span></h2>
        <h2><span> UUID: </span></h2>
        </div>
    );
  }
}
