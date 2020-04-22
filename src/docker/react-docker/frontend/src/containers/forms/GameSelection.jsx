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
          const games = res.data;
          return games;
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

// Item #10 on the ToDo list. usernames are in the gamestate
  render() {
    return ( <
      div id = 'gamelist' > {
        this.state.games.map((game) => ( <
          div key = {
            game.id
          } >
          <
            button onClick = {
              () => this.handleStartGame(game)
            } > {
              game.player_1
            } vs. {game.player_2}< /button> </div > ))
      } < /div>
    );
  }
}
export default withRouter(GameSelection);
