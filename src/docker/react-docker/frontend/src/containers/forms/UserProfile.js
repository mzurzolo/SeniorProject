import React, {Component} from 'react';
import {withRouter} from 'react-router';
import axios from 'axios';
import './UserProfile.css';


class UserProfile extends Component {
  constructor(props) {
    super(props);
    axios.get('/d/acct/profile/').then((res) => {
      if (res.status === 403) {
        void(0);
      }
    }).catch((error) => {
      this.props.history.push('/');
    });
    this.state = {
      curr_user: [],
    };
  }
  async componentDidMount() {
    await axios.get('/d/acct/profile/').then((res) => {
      if (res.status === 200) {
        const curr_user = res.data;
        this.setState({
          curr_user,
        });
      }
    });
  }
  // ToDo item #6: we may need a different page for this as well, maybe a form like user registration.
  render() {
    return (
      <div id='userprofile'>
        <h1>User Profile </h1>
        <table>
          <tbody>
            {<tr><td id='uname'>Username: </td><td id='unameval'>{this.state.curr_user.username}</td></tr>}
            {<tr><td id='email'>Email: </td><td id='emailval'>{this.state.curr_user.email}</td></tr>}
            {<tr><td id='fname'>First Name: </td><td id='fname'>{this.state.curr_user.first_name}</td></tr>}
            {<tr><td id='lname'>Last Name: </td><td id='lname'>{this.state.curr_user.last_name}</td></tr>}
          </tbody>
        </table>
          <tbody></tbody>
        <button id='edit' block bsSize="small" type="button" onClick={() =>
          this.props.history.push('/UserEdit')}>Edit Profile</button>
      </div>
    );
  }
}
export default withRouter(UserProfile);
