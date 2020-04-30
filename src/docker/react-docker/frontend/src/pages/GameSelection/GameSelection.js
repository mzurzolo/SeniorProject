import React, {Component} from 'react';
import {withRouter} from 'react-router';
import axios from 'axios';

import GameSelectionMatUI from '../../containers/forms/GameSelectionMatUI';

class GameSelection extends Component {
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
  render() {
    return (
      <div id='gameselection'>
        <GameSelectionMatUI />
      </div>
    );
  }
}
export default withRouter(GameSelection);
