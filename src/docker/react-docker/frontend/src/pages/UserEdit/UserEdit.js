import React, {Component} from 'react';
import NavBar from '../../containers/media/Navbar.jsx';
import EditInfo from '../../containers/forms/EditInfo';
import './UserEdit.css';

export default class Signup extends Component {
    render() {
      return (
        <div id='UserEdit'>
            <NavBar/>
            <EditInfo/>
        </div>
      );
    }
  }