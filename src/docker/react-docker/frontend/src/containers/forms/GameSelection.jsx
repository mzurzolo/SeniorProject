import React, {
  useState,
} from 'react';
import {
  useHistory,
} from 'react-router-dom';
import axios from 'axios';
import {
  withRouter,
} from 'react-router';
import Button from '@material-ui/core/Button';

class GameSelection extends React.Component {
  constructor(props) {
    super(props);
    this.state = {
      games: [],
    };
  }
  async componentDidMount() {
    const games = await axios.get(`/d/game/available/`)
        .then((res) => {
          const games_response = res.data;
          const games = games_response.map(async function(game) {
            const gamestate = await axios.get('/d/game/' + game.id + '/state/').then((res) => {
              if (res.status === 200) {
                const gamestate = res.data;
                game.gamestate = gamestate;
                return game;
              }
            });
            return gamestate;
          });
          return Promise.all(games);
        });
    this.setState({
      games: games,
    });
  }
  handleStartGame(game) {
    if (game.player_2 === null) {
      alert('Waiting on player 2!');
    } else {
      this.setState({
        game: game,
      });
      this.props.history.push({
        pathname: '/Game',
        state: {
          game: game,
        },
      });
    }
  }


  render() {
    return ( <
      div id = 'gamelist' > {
        this.state.games.map((game) => ( <
          div key = {
            game.id
          } >
          <
            Button onClick = {
              () => this.handleStartGame(game)
            } > {
              game.gamestate.player1
            } vs. {game.gamestate.player2} -- {game.id.substring(0, 4)}< /Button> </div > ))
      } < /div>
    );
  }
}
export default withRouter(GameSelection);
