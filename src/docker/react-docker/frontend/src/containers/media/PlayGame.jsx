// Get started by creating a new React
// component and importing the libraries!
// TODO: 1. Also see /SP-Shell/Assets/Scripts/* and /SP-Shell/Assets/Plugins/webgl/Myplugin.jslib
import React, {useState} from 'react';
import {useHistory, useParams} from 'react-router-dom';
import Unity, {UnityContent} from 'react-unity-webgl';
import axios from 'axios';
import {withRouter} from 'react-router';

class PGame extends React.Component {
  constructor(props) {
    super(props);
    axios.get('/d/acct/profile/').then((res) => {
      if (res.status === 403) {
        void(0);
      }
    }).catch((error) => {
      this.props.history.push('/');
    });
  }
  async componentDidMount() {
    const game = await axios.get('/d/game/' + this.props.match.params.id).then(async function(response) {
      if (response.status === 200) {
        const inner_game = response.data;
        const gamestate = await axios.get('/d/game/' + inner_game.id + '/state/').then((res) => {
          if (res.status === 200) {
            const gamestate = res.data;
            return gamestate;
          }
        });
        inner_game.gamestate = gamestate;
        return inner_game;
      }
    });
    if (game.player_2 === null) {
      this.props.history.push('/GameMenu');
    } else {
      this.props.history.push({
        pathname: '/Game',
        state: {
          game: game,
        },
      });
    }
  }
  render() {
    return (<div id='playgame' />);
  }
}

export default withRouter(PGame);
