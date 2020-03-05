import React, { Component } from "react";
import NewUser from '../../containers/NewUser';
import "./Signup.css";

export default class Signup extends Component {

  
    render() {   
      return (
          <div id='signup'>
            <NewUser/>
          </div>
        );      
    }
  }