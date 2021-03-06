import React, {Component} from 'react';
import NavBar from '../../containers/media/Navbar.jsx';
import axios from 'axios';


export default class UserProfile extends Component {
  constructor(props) {
    super(props);
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
        <NavBar/>
        <h1>User Profile </h1>
        <h2>Username: {this.state.curr_user.username}</h2>
        <h2>Email: {this.state.curr_user.email}</h2>
        <h2>First Name: {this.state.curr_user.first_name}</h2>
        <h2>Last Name: {this.state.curr_user.last_name}</h2>
        <button block bsSize="small" type="button" onClick={() =>
            this.props.history.push('/UserEdit')}>Edit Profile</button>
      </div>
    );
  }
}
