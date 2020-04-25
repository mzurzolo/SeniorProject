import React, { Component } from 'react';
import './App.css';
import InitChat from './'
import Chat from './'
import WebSocketInstance from './services/WebSocket'

export default class M extends Component {
    constructor(props) {
        super(props);
        this.state = {
            username: '',
            loggedIn: false
        };
    }

    handleLoginSubmit = (username) => {
        this.setState({ loggedIn: true, username: username });
        WebSocketInstance.connect();
    }

    render() {
        const {
            loggedIn,
            username
        } = this.state;

        return (
            <div className="App">
                {
                    loggedIn ?
                        <Chat
                            currentUser={username}
                        />
                        :
                        <InitChat
                            onSubmit={this.handleLoginSubmit}
                            usernameChangeHandler={this.usernameChangeHandler}
                        />
                }
            </div>
        );
    }
}