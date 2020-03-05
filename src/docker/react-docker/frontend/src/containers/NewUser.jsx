import React, { useState } from "react";
import { Button, FormGroup, FormControl, FormLabel } from "react-bootstrap";
import "./newuser.css";
import axios from "axios";


export default function NewUser(props) {
    const [user, setUser] = useState("");
    const [email, setEmail] = useState("");
    const [password, setPassword] = useState("");



  function validateForm() {
    return email.length > 0 && password.length > 0;
  }

  function handleSubmit(event) {
    //event.preventDefault();
    userAction();
  }

   function userAction(){
    axios.post("/api/users/", {
        username: "AAHHH_test",
        email: "ahtest@email.com"
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
        <Button block bsSize="small" enabled={!validateForm()} type="submit" onclick={userAction()}>
          Create Account

               </Button>

      </form>
    </div>
  );
}
