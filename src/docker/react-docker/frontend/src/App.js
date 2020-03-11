import React from "react";
import axios from "axios";
import Landing from './pages/Landing/Landing';
import UserDashboard from './pages/UserDashboard/UserDashboard';
import Signup from './pages/Signup/Signup';
import {Route, BrowserRouter as Router} from 'react-router-dom'

//https://www.techiediaries.com/django-react-forms-csrf-axios/
axios.defaults.xsrfCookieName = 'csrftoken'
axios.defaults.xsrfHeaderName = 'X-CSRFToken'

export default class App extends React.Component {
  render() {
    return (
      <Router>
      <div>
          <Route exact path='/' component={Landing} />
          <Route path='/Dashboard' component={UserDashboard} />
          <Route path='/Signup' component={Signup} />
      </div>
      </Router>
    );

    this.unityContent.on("GameOver", winner => {
     console.log("Winner is " + winner);
   });

   this.unityContent.on("loaded", () => {
     console.log("Unity loaded!");
     var u = this.state.users.map( function(user) {
         return user.username;
         });
     this.unityContent.send(
        "Player1",
        "SetName",
        u[0]
      );
    this.unityContent.send(
       "Player2",
       "SetName",
       u[1]
     );
     console.log("Users assigned!");
   });
  }

  render() {

    // Finally render the Unity component and pass
    // the Unity content through the props.

    return <Unity unityContent={this.unityContent} />;
  }
}
