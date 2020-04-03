import React from 'react';

import axios from 'axios';

export default class GameSelection extends React.Component {
  state = {
    games: []
  }

  componentDidMount() {
    axios.get(`/d/game/available/`)
      .then(res => {
        const games = res.data;
        this.setState({ games });
      })
  }

  render() {
    return (
      <ul>
        { this.state.games.map(game => <button>{game.id}</button>)}
      </ul>
    )
  }
}
