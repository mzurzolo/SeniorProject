// Get started by creating a new React
// component and importing the libraries!

import React from 'react';
import Unity, {UnityContent} from 'react-unity-webgl';
import axios from 'axios';

export default class Game extends React.Component {
  async componentDidMount() {
    this.state = this.state;
    try {
      const user_profile = await axios.get('/api/profile/').then(function(response) {
        if (response.status === 200) {
          return response.data;
        }
      }).catch(function(error) {
        alert('Invalid request! \n' + error);
      });
      const response = await axios.post('/game/game/', {
        player_1: user_profile.id,
      }).then(function(response) {
        // If successful response (201)
        if (response.status === 201) {
          return response.data;
        }
      }).catch(function(error) {
        alert('Invalid request! \n' + error);
      });
      console.log(response);
      try {
        this.setState({
          response,
        });
      } catch (e) {
        console.log(e);
      }
      console.log(this.state);
    } catch (e) {
      console.log(e);
    }
  }

  constructor(props) {
    super(props);
    console.log(props);
    console.log(this.state);
    // Next up create a new Unity Content object to
    // initialise and define your WebGL build. The
    // paths are relative from your index file.

    this.unityContent = new UnityContent(
        'MyGame/Build/MyGame.json',
        'MyGame/Build/UnityLoader.js',
    );

    this.unityContent.on('GameOver', (winner) => {
      const r = this.state.response;
      const game_id = r.id;
      axios.patch('/game/game/' + game_id + '/', {
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

    this.unityContent.on('loaded', () => {
      console.log('Unity loaded!');
      const r = this.state.response;
      console.log(r);
      this.unityContent.send(
          'Player1',
          'SetName',
          r.player_1,
      );
      this.unityContent.send(
          'Player2',
          'SetName',
          r.player_2,
      );
      console.log('Users assigned!');
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

// export default Game;
