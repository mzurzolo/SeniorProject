import React from 'react';
import './Navbar.css';
import axios from 'axios';
import {useHistory} from 'react-router-dom';

export default function NavBar() {
  const history = useHistory();

  function handleLogout() {
    axios.post('/d/acct/logout/').then(res => {
      if (res.status === 200) {
        history.push('/');
      }
    });
  }
// ToDo Item #8: we need another button here maybe
  return (
    <div id='navbar'>
      <button onClick={() => history.push('/Dashboard')}>Dashboard</button>
      <button onClick={() => history.push('/Profile')}>User Profile</button>
      <button onClick={handleLogout}>Sign Out</button>
    </div>
  );
}
// <a onClick={() => history.push('/Dashboard')}>Dashboard</a>
