import React, { Component } from 'react';
import {useHistory} from "react-router-dom";

export default class UserDashboard extends Component {


    render() {
        return(
            <div id='dashboard'>
                <h1>Dashboard</h1>
                <button block bsSize="small" type="button" onClick={() => this.props.history.push("/Game")}>Start Game
                </button>
            </div>
        )
    }
}
