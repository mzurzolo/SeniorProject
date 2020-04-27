import React, {Component} from 'react';
import {withRouter} from 'react-router';

import GameSelectionMatUI from '../../containers/forms/GameSelectionMatUI';

class GameSelection extends Component {
  render() {
    return (
      <div id='gameselection'>
        <GameSelectionMatUI />
      </div>
    );
  }
}
export default withRouter(GameSelection);
