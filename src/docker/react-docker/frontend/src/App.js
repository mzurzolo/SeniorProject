import React from "react";
import Landing from './pages/Landing/Landing'
import SignUp from './pages/Signup/Signup'
import UserDemo from './containers/UsersDemo'
import './App.css';


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

