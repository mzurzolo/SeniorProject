import React, { useState } from "react";
import "./login.css";
import {useHistory} from "react-router-dom";
import axios from "axios";
export default function Login(props) {
  const history = useHistory();
  const [user, setUser] = useState("");
  const [password, setPassword] = useState("");
    function handleSubmit(event) {
      event.preventDefault();
      userLogin();
    }
    function userLogin(){
      // Call post to login user
      axios.post("/api/login/", {
          username: user,
          password: password
        }).then(function (response) {
          // If successful response (200)
          if (response.status === 200) {
            alert("Success! Your account has been logged in");
            history.push("/UserDashboard")
          }
        }).catch(function (error) {
          alert("Invalid request! \n" + error);
        });
  }
    return (
      <div className="Login">
        <form onSubmit={handleSubmit}>
            <label>Username:</label>
            <input
              autoFocus
              placeholder="Username"
              required
              type="text"
              onChange={e => setUser(e.target.value)} />
            <label>Password:</label>
            <input
              placeholder="Password"
              type="password"
              minLength="8"
              required
              onChange={e => setPassword(e.target.value)}
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
