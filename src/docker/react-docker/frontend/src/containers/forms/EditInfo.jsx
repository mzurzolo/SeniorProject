import React, {useState} from 'react';
import {useHistory} from 'react-router-dom';
import './editinfo.css';
import axios from 'axios';

export default function EditInfo(props) {
    const history = useHistory();
    const [user, setUser] = useState('');
    const [email, setEmail] = useState('');
    const [email2, setEmail2] = useState('');
    const [password, setPassword] = useState('');
    const [password2, setPassword2] = useState('');
    const [firstName, setFirstName] = useState('');
    const [lastName, setLastName] = useState('');

    function handleSubmit(event) {
        event.preventDefault();
        userPost();
      }

      function confirmPasswordMatch() {
        if (password !== password2) {
          return false;
        } else {
          return true;
        }
      }
    
      function confirmEmailMatch() {
        if (email !== email2) {
          return false;
        } else {
          return true;
        }
      }
    
      function userPost() {
        // Validate the email and password
        if (!confirmEmailMatch()) {
          alert('Invalid request! \n Emails do not match');
          return false;
        } else if (!confirmPasswordMatch()) {
          alert('Invalid request! \n Passwords do not match');
          return false;
        }

        // Call post to create an edit
    axios.post('/d/acct/profile/', {
        username: user,
        email: email,
        password1: password,
        password2: password2,
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
            <input
              placeholder="Email"
              type="email"
              onChange={(e) => setEmail(e.target.value)} />
            <input
              placeholder="Retype Email"
              type="email"
              onChange={(e) => setEmail2(e.target.value)} />
            <input
              placeholder="Password"
              type="password"
              minLength="8"
              onChange={(e) => setPassword(e.target.value)}
            />
            <input
              placeholder="Retype Password"
              type="password"
              minLength="8"
              onChange={(e) => setPassword2(e.target.value)}
            />
            <button type="submit">Edit Account</button>
          </form>
        </div>
      );
    }