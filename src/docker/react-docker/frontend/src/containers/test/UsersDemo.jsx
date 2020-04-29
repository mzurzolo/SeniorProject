import React from 'react';

export default class UserDemo extends React.Component {
  state = {
    users: []
  };

  async componentDidMount() {
    try {
      const res = await fetch('/d/users/');
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
      <div id='userdemo'>
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
