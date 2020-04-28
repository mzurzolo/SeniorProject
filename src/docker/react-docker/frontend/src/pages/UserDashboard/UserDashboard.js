import React, {Component} from 'react';
import NavBar from '../../containers/media/Navbar.jsx';
import Leaderboard from '../../containers/media/Leaderboard';
import './UserDashboard.css';

export default class UserDashboard extends Component {
  async componentDidMount() {
    const history = useHistory();
  axios.get('/d/acct/profile/').then((res) => {
    if (res.status === 200) {
      history.push('/Dashboard');
    }
    }).catch(function(error) {
        alert('Invalid request! \n' + error);
        history.push('/Landing')
      });
  }
  render() {
    return (
      <div id='dashboard'>
        <NavBar/>
        <div id='startgame'>
          <button block bsSize="small" type="button" onClick={() =>
            this.props.history.push('/SelectGame')}>Play Game</button>
        </div>
        <Leaderboard/>
      </div>
    );
  }
}
