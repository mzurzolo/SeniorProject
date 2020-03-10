import React, { useState } from "react";
import { Button, FormGroup, FormControl, FormLabel } from "react-bootstrap";
import "./newuser.css";
import axios from "axios";


export default function NewUser(props) {
    const [user, setUser] = useState("");
    const [email, setEmail] = useState("");
    const [password1, setPassword1] = useState("");
    const [password2, setPassword2] = useState("");



  function validateForm() {
    return email.length > 0 && password1.length > 0;
  }

  function handleSubmit(event) {
    event.preventDefault();
  }

   function userAction(){
     axios.post("/api/registration", {
        username: user,
        email: email,
        password1: password1,
        password2: password2
      });

}


// onclick={userAction()}>>
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
        <FormGroup controlId="password1" bsSize="large">
          <FormLabel>Password</FormLabel>
          <FormControl
            autoFocus
            type="password"
            value={password1}
            onChange={e => setPassword1(e.target.value)}
          />
        </FormGroup>
        <FormGroup controlId="password2" bsSize="large">
          <FormLabel>Retype Password</FormLabel>
          <FormControl
            autoFocus
            type="password"
            value={password2}
            onChange={e => setPassword2(e.target.value)}
          />
        </FormGroup>
        <Button block bsSize="small" enabled={!validateForm()} type="submit">
          Create Account

               </Button>

      </form>
    </div>
  );
}
