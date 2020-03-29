import React from 'react';
import './navbar.css';
import axios from 'axios';
import {useHistory} from 'react-router-dom';

export default function NavBar() {
  const history = useHistory();

  function handleLogout() {
    axios.post('/api/logout/')
    history.push('/')
  }

  return (
    <div id='navbar'>
      <a onClick={() => history.push('/Dashboard')}>Dashboard</a>
      <a onClick={() => history.push('/Profile')}>User Profile</a>
      <a onClick={handleLogout}>Sign Out</a>
    </div>
  );
}