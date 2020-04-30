import React, {Component} from 'react';
import NavBar from '../../containers/media/Navbar.jsx';
import EditInfo from '../../containers/forms/EditInfo';
import './UserEdit.css';
import axios from 'axios';

export default class Signup extends Component {
  constructor(props) {
    super(props);
    axios.get('/d/acct/profile/').then((res) => {
      if (res.status === 403) {
        void(0);
      }
    }).catch((error) => {
      this.props.history.push('/');
    });
  }
    render() {
      return (
        <div id='UserEdit'>
            <NavBar/>
            <EditInfo/>
        </div>
      );
    }
  }