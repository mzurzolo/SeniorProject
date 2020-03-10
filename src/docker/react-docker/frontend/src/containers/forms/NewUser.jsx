import React, { useState } from "react";
import "./newuser.css";
import axios from "axios";

export default function NewUser(props) {
    const [user, setUser] = useState("");
    const [email, setEmail] = useState("");
    const [email2, setEmail2] = useState("");
    const [password, setPassword] = useState("");
    const [password2, setPassword2] = useState("");

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

  function userPost(){
    // Validate the email and password
    if (!confirmEmailMatch()) {
      alert("Invalid request! \n Emails do not match");
      return false;
    } else if (!confirmPasswordMatch()) {
      alert("Invalid request! \n Passwords do not match");
      return false;
    } 

    // Call post to create a new user
    axios.post("/api/users/", {
        username: user,
        email: email
      }).then(function (response) {
        // If successful response (201)
        if (response.status === 201) {
          alert("Success! Your account has been created");
        }
      }).catch(function (error) {
        alert("Invalid request! \n" + error);
      });
}

  return (
    <div className="NewUser">
      <form onSubmit={handleSubmit}>
          <label>Username:</label>
          <input
            autoFocus
            placeholder="Username"
            required
            type="text"
            onChange={e => setUser(e.target.value)} />
          <label>Email:</label>
          <input
            placeholder="Email"
            type="email"
            required
            onChange={e => setEmail(e.target.value)} />
          <label>Retype Email:</label>
          <input
            placeholder="Retype Email"
            type="email"
            required
            onChange={e => setEmail2(e.target.value)} />
          <label>Password:</label>
          <input
            placeholder="Password"
            type="password"
            minLength="8"
            required
            onChange={e => setPassword(e.target.value)}
          />
          <label>Retype Password:</label>
          <input
            placeholder="Retype Password"
            type="password"
            minLength="8"
            required
            onChange={e => setPassword2(e.target.value)}
          />
        <button type="submit">Create Account</button>
      </form>
    </div>
  );
}
