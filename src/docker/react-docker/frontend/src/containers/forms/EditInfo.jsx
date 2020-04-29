import React, {useState} from 'react';
import {useHistory} from 'react-router-dom';
import './editinfo.css';
import axios from 'axios';

export default function EditInfo(props) {
  const history = useHistory();
  const [user, setUser] = useState('');
  const [firstName, setFirstName] = useState('');
  const [lastName, setLastName] = useState('');

  function handleSubmit(event) {
    event.preventDefault();
    userPost();
  }
  function userPost() {
    // Call post to create an edit
    axios.post('/d/acct/profile/', {
      username: user,
      first_name: firstName,
      last_name: lastName,
    }).then(function(response) {
      // If successful response (200)
      if (response.status === 200) {
        alert('Success! Your account has been updated');
        history.push('/Dashboard');
      }
    }).catch(function(error) {
      alert('Invalid request! \n' + error);
      window.location.reload();
    });
  }

  return (
    <div className="EditInfo">
      <form onSubmit={handleSubmit}>
        <input
          autoFocus
          placeholder="Username"
          type="text"
          onChange={(e) => setUser(e.target.value)} />
        <input
          autoFocus
          placeholder="First name"
          type="text"
          onChange={(e) => setFirstName(e.target.value)} />
        <input
          autoFocus
          placeholder="Last name"
          type="text"
          onChange={(e) => setLastName(e.target.value)} />
        <button type="submit">Edit Account</button>
      </form>
    </div>
  );
}
