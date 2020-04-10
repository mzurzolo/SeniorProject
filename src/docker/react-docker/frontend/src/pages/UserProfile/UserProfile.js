import React, {Component} from 'react';
import NavBar from '../../containers/media/Navbar.jsx';
import axios from 'axios';

export default class UserProfile extends Component {
  async componentloggedin(){
        try{
        const user_profile = await axios.get('/d/acct/profile/').then(function(response) {
        if (response.status === 200) {
          return response.data;
        }
      }).catch(function(error) {
        alert('Invalid request! \n' + error);
      });
    }
      catch (e) {
        console.log(e);
      }
    }

      render() {
        return (
          <div id='userprofile'>
            <NavBar/>
        <h1>User Profile </h1>
        <h2>Username: </h2>
        <h2> Email: </h2>
      </div>
    );
  }
}
