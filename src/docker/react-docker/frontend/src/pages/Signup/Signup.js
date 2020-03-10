import React, { Component } from "react";
import NewUser from '../../containers/forms/NewUser';
import UsersDemo from '../../containers/test/UsersDemo'
import "./Signup.css";

export default class Signup extends Component {

  
    render() {   
      return (
          <div id='signup'>
            <NewUser/>
            <UsersDemo/>
          </div>
        );      
    }
  }