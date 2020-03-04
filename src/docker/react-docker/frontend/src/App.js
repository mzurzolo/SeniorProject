import React, { Component } from 'react';
import Login from './containers/login';
import GameDescription from './containers/GameDescription';
import GamePicture from './containers/GamePicture';
import Leaderboard from './containers/Leaderboard';
import './App.css';

class App extends Component {
  state = {
    users: []
  };

  async componentDidMount() {
    try {
      const res = await fetch('/api/users');
      const users = await res.json();
      this.setState({
        users
      });
    } catch (e) {
      console.log(e);
    }
  }

  render() {
    return (
      <div id='app'>
        <GameDescription />
        <Login />
        <GamePicture />
        <Leaderboard />

        {this.state.users.map(item => (
          <div key={item.id}>
            <h1>Username: {item.username}</h1>
            <h2><span>Email: {item.email}</span></h2>
            <h2><span>UUID: {item.id}</span></h2>
            <h2><span>URL: {item.url}</span></h2><br></br>
          </div>
        ))}
      </div>
    );
  }
}

export default App;
