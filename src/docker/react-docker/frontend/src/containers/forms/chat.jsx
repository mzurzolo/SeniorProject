import React from 'react';
import ReactDOM from 'react-dom';
import Websocket from 'react-websocket';
import PropTypes from 'prop-types';


class Chat extends React.Component {
  constructor(props) {
    super(props);
    this.state = {
      player_game_list: [],
      available_game_list: [],
    };


    // bind button click
    this.sendSocketMessage = this.sendSocketMessage.bind(this);
  }

  componentDidMount() { }

  componentWillUnmount() {
    this.serverRequest.abort();
  }

  handleData(data) {
    // receives messages from the connected websocket
    const result = JSON.parse(data);


    // we've received an updated list of available games
    this.setState({ available_game_list: result });
  }

  sendSocketMessage(message) {
    // sends message to channels back-end
    const socket = this.refs.socket;
    socket.state.ws.send(JSON.stringify(message));
  }

  render() {
    // preset the current_user
    const current_user = null;
    const roomName = '{{ room_name|escapejs }}';
    const socket = new WebSocket('ws://' + window.location.host + '/ws/chat/' + roomName + '/');
    const url = 'ws://' + window.location.host + '/ws/chat/' + roomName + '/';
    return (
      <div>
        <head>
          <meta charset="utf-8" />
          <title>Chat Room</title>
        </head>
        <body>
          <textarea id="chat-log" cols="100" rows="20"></textarea><br />
          <input id="chat-message-input" type="text" size="100" /><br />
          <input id="chat-message-submit" type="button" value="3end" />
        </body>
      </div>

    );
  }
}

Chat.propTypes = {
  socket: PropTypes.string,
};

export default Chat;
