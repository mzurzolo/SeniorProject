import React, { useState } from "react";
import { Button, FormGroup, FormControl, FormLabel } from "react-bootstrap";
import "./newuser.css";
import axios from "axios";

export default function NewUser(props) {
    const [user, setUser] = useState("");
    const [email, setEmail] = useState("");
    const [password, setPassword] = useState("");
    const [password_confirm, setPassword_confirm] = useState("");


  function handleSubmit(event) {
    event.preventDefault();
    userPost()
  }

   function userPost(){
    axios.post("/api/accounts/register/", {
    username: user,
    email: email,
    password: password,
    password_confirm: password_confirm
});
}

  return (
    <div className="NewUser">
      <form onSubmit={handleSubmit}>
      <FormGroup controlId="user" bsSize="large">
          <FormLabel>User Name</FormLabel>
          <FormControl
            autoFocus
            type="user"
            value={user}
            onChange={e => setUser(e.target.value)}  />
        </FormGroup>
        <FormGroup controlId="email" bsSize="large">
          <FormLabel>Email</FormLabel>
          <FormControl
            autoFocus
            type="email"
            value={email}
            onChange={e => setEmail(e.target.value)}
          />
        </FormGroup>
        <FormGroup controlId="password" bsSize="large">
          <FormLabel>Password</FormLabel>
          <FormControl
            autoFocus
            type="password"
            value={password}
            onChange={e => setPassword(e.target.value)}
          />
        </FormGroup>
        <FormGroup controlId="password_confirm" bsSize="large">
          <FormLabel>Retype Password</FormLabel>
          <FormControl
            autoFocus
            type="password"
            value={password_confirm}
            onChange={e => setPassword_confirm(e.target.value)}
          />
        </FormGroup>
        <Button block bsSize="small" type="submit" onclick={userPost()}>
            Create Account
          </Button>

      </form>
    </div>
  );
}
