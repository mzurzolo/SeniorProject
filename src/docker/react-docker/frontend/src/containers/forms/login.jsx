import React, {useState} from 'react';
import './login.css';
import {useHistory} from 'react-router-dom';
import axios from 'axios';

export default function Login(props) {
  const history = useHistory();
  const [user, setUser] = useState('');
  const [password, setPassword] = useState('');

  function handleSubmit(event) {
    event.preventDefault();
    userLogin();
  }

  function userLogin() {
    // Call post to login user
    axios.post('/api/login/', {
      login: user,
      password: password,
    }).then(function(response) {
      // If successful response (200)
      if (response.status === 200) {
        history.push('/Dashboard');
      }
    }).catch(function(error) {
      alert('Invalid request! \n' + error);
    });
  }

  return (
    <div id="Login">
      <form onSubmit={handleSubmit}>
        <input
          autoFocus
          placeholder="Username"
          required
          type="text"
          onChange={(e) => setUser(e.target.value)} />
        <input
          placeholder="Password"
          type="password"
          minLength="8"
          required
          onChange={(e) => setPassword(e.target.value)}
        />
        <button block bsSize="small" type="submit" onClick={() => history.push('/Signup')}>
          {'Create an account'}
        </button>
        <button block bsSize="small" type="submit" id="loginbutton">
            Login
        </button>
      </form>
    </div>
  );
}
