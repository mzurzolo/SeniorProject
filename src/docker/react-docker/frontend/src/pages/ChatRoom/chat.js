import React, {Component} from 'react';
import ReactDOM from 'react-dom';
import Websocket from 'react-websocket';
import PropTypes from 'prop-types';
import Chat from '../../containers/forms/chat';


// renders out the base component
// function render_component() {
//  ReactDOM.render(<LobbyBase current_user={current_user} socket={lobby_sock}/>, document.getElementById('lobby_component'));
// }


// render_component();


export default class ChatRoom extends Component {
  render() {
    return (
      <div id='chat'>
        <Chat />
      </div>
    );
  }
}
