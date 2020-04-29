import React, {Component} from 'react';

import SignInMatUI from '../../containers/forms/SignInMatUI';
import axios from 'axios';

export default class SignIn extends Component {
  constructor(props) {
    super(props);
    axios.get('/d/acct/profile/').then((res) => {
      if (res.status === 200) {
        this.props.history.push('/Dashboard');
      }
    });
  }


  render() {
    return (
      <div id='signin'>
        <SignInMatUI />
      </div>
    );
  }
}
