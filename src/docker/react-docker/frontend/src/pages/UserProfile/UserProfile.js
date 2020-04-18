import React, { Component } from 'react';
import NavBar from '../../containers/media/Navbar.jsx';
import axios from 'axios';





export default class UserProfile extends Component {
  async componentDidMount() {
    axios.get('/d/acct/profile/').then((res) => {
      <html>
        <body>
          <h1>My First Web Page</h1>
          <p>My first paragraph.</p>
          <script>
            window.alert(5 + 6)
           </script>

        </body>
      </html>


      if (res.status === 200) {
        console.log("this is working!")
        const curr_user = res.data;
        const curr_username = curr_user.username;
        const curr_email = curr_user.email;
      }
    })
  }
  render() {
    return (
      <div id='userprofile'>
        <NavBar />
        <h1>User Profile </h1>
        <h2>Username:</h2>
        <h2>Email: </h2>
        <h2>UUID: </h2>
      </div>
    );
  }
}

