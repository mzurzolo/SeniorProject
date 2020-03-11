import React, { useState } from "react";
import "./login.css";
import {useHistory} from "react-router-dom";

export default function Login(props) {
  const [email, setEmail] = useState("");
  const [password, setPassword] = useState("");
  const history = useHistory();

  function handleSubmit(event) {
    event.preventDefault();
  }

  return (
    <div className="Login">
      <form onSubmit={handleSubmit}>
          <label for="email">Email</label>
          <input
            autoFocus
            type="email"
            value={email}
            onChange={e => setEmail(e.target.value)}
          />
          <label>Password</label>
          <input
            value={password}
            onChange={e => setPassword(e.target.value)}
            type="password"
          />
        
        <button block bsSize="small" type="submit" >
          Login
        </button>
        <button block bsSize="small" type="submit" onClick={() => history.push("/Signup")}>
        No account? --> Register
        </button>
      </form>
    </div>
  );
}
