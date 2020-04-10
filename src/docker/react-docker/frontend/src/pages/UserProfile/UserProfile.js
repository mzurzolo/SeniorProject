import React, {Component} from 'react';
import NavBar from '../../containers/media/Navbar.jsx';
import axios from 'axios';

export default class UserProfile extends Component {
  async componentloggedin(){

    state = {
      profile: []
    };
        try{
          const res = await fetch('/d/acct/profile/');
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
          {this.state.profile.map(item =>(
            <div key={item.id}>
        <h2>Username: {item.username}</h2>
        <h2><span> Email: {item.email}</span></h2>
        <h2><span> UUID: {item.id}</span></h2>
        </div>
          ))};
      </div>
    );
  }
}
