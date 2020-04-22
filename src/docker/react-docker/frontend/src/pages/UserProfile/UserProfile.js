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
  // Item #10 on the ToDo list. usernames are in the gamestate
  render() {
    return (
      <div id='userprofile'>
        <NavBar/>
        <h1>User Profile </h1>
        <h2>Username: {this.state.curr_user.username}</h2>
        <h2>Email: {this.state.curr_user.email}</h2>
        <h2>First Name: {this.state.curr_user.first_name}</h2>
        <h2>Last Name: {this.state.curr_user.last_name}</h2>
        <button block bsSize="small" type="submit" id="secondbutton">
        Edit
        </button>
      </div>
    );
  }
}
