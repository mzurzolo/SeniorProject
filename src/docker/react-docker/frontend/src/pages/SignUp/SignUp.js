import React, {Component} from 'react';

import NewUser from '../../containers/forms/NewUser';
import './Signup.css';

export default class SignUp extends Component {
  render() {
    return (
      <div id='signup'>
        <NewUser />
      </div>
    );
  }
}
