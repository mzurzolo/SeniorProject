import React from "react";
import axios from "axios";
import Landing from './pages/Landing/Landing'
import SignUp from './pages/Signup/Signup'
import UserDemo from './containers/UsersDemo'
import './App.css';

//https://www.techiediaries.com/django-react-forms-csrf-axios/
axios.defaults.xsrfCookieName = 'csrftoken'
axios.defaults.xsrfHeaderName = 'X-CSRFToken'


export default class App extends React.Component {
  render() {
    return (
      <div id='app'>
        <Landing/>
        <SignUp />
        <UserDemo />
      </div>
    );
  }
}
