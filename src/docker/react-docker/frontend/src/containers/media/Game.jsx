// Get started by creating a new React
// component and importing the libraries!

import React, {useState} from 'react';
import {useHistory} from 'react-router-dom';
import Unity, {UnityContent} from 'react-unity-webgl';
import GameSelection from '../forms/GameSelection';
import axios from 'axios';
import {withRouter} from 'react-router';

class Game extends React.Component {
  constructor(props) {
    super(props);
    this.unityContent = new UnityContent(
        'MyGame/Build/MyGame.json',
        'MyGame/Build/UnityLoader.js',
    );
  }
  async componentDidMount() {
    const gameuuid = this.props.location.state.game.id;
    this.unityContent.on('loaded', () => {
      console.log('Unity loaded!');
      axios.get('/d/game/' + gameuuid + '/state/').then((res) => {
        if (res.status === 200) {
          const gamestate = res.data;
          this.unityContent.send(
              'Player1',
              'SetName',
              gamestate.player1,
          );
          this.unityContent.send(
              'Player2',
              'SetName',
              gamestate.player2,
          );
          axios.get('/d/acct/profile/').then((res) => {
            if (res.status === 200) {
              const curr_user = res.data;
              console.log('ImportState');
              if (curr_user.username === gamestate.player1) {
                this.unityContent.send(
                    'GameController',
                    'SetIDX',
                    0,
                );
              } else {
                this.unityContent.send(
                    'GameController',
                    'SetIDX',
                    1,
                );
              }
              this.unityContent.send(
                  'GameController',
                  'ImportState',
                  JSON.stringify(gamestate),
              );
              this.unityContent.send(
                  'GameController',
                  'PollTrigger',
              );
            }
          });
        }
      });
    });
    this.unityContent.on('GameOver', (winner) => {
      const gameuuid = this.props.location.state.game.id;
      console.log('winner!');
      console.log(winner);
      axios.patch('/d/game/' + gameuuid + '/winner/', {
        winner: winner,
      }).then(function(response) {
        // If successful response (201)
        if (response.status === 200) {
          alert('Winner, ' + winner + '!');
        }
      }).catch(function(error) {
        alert('Invalid request! \n' + error);
      });
      console.log('Winner is ' + winner);
    });

    this.unityContent.on('EndMove', () => {
      console.log('End Move');
      axios.get('/d/game/' + gameuuid + '/state/').then((res) => {
        if (res.status === 200) {
          const gamestate = res.data;
          this.unityContent.send(
              'GameController',
              'ImportState',
              JSON.stringify(gamestate),
          );
        }
      });
    });

    this.unityContent.on('PollTrigger', () => {
      console.log('PollTrigger');
      axios.get('/d/game/' + gameuuid + '/state/').then((res) => {
        if (res.status === 200) {
          const gamestate = res.data;
          this.unityContent.send(
              'GameController',
              'ImportState',
              JSON.stringify(gamestate),
          );
        }
      });
    });

    this.unityContent.on('ExportState', (savestate) => {
      console.log('Export State');
      const jsonsavestate = JSON.parse(savestate);
      axios.patch('/d/game/' + gameuuid + '/state/', {gamestate: jsonsavestate}).then(function(response) {
        if (response.status === 200) {
          console.log('good');
        }
      }).catch(function(error) {
        alert('Invalid request! \n' + error);
      });
    });
  }


  render() {
    // Finally render the Unity component and pass
    // the Unity content through the props.
    return (
      <div id='games'>
        <Unity unityContent={this.unityContent} />
      </div>);
  }
}

export default withRouter(Game);
