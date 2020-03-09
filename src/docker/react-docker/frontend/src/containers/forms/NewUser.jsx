import React, { useState } from "react";
import { Button, FormGroup, FormControl, FormLabel } from "react-bootstrap";
import "./newuser.css";
import axios from "axios";

export default function NewUser(props) {
    const [user, setUser] = useState("");
    const [email, setEmail] = useState("");
    const [password, setPassword] = useState("");


  function handleSubmit(event) {
    event.preventDefault();
    userPost();
  }

   function userPost(){
    axios.post("/api/users/", {
        username: user,
        email: email
      });
}

  return (
    <div className="NewUser">
      <form onSubmit={handleSubmit}>
        <FormGroup controlId="user" >
            <FormLabel>User Name</FormLabel>
            <FormControl
              autoFocus
              type="user"
              value={user}
              onChange={e => setUser(e.target.value)}  />
          </FormGroup>
          <FormGroup controlId="email" >
            <FormLabel>Email</FormLabel>
            <FormControl
              autoFocus
              type="email"
              value={email}
              onChange={e => setEmail(e.target.value)}
            />
          </FormGroup>
          <FormGroup controlId="password" >
            <FormLabel>Password</FormLabel>
            <FormControl
              autoFocus
              type="password"
              value={password}
              onChange={e => setPassword(e.target.value)}
            />
          </FormGroup>
          <Button block type="submit" >
            Create Account
          </Button>

      </form>
    </div>
  );
}
