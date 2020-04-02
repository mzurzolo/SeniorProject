import React, {useState} from 'react';
import './GameSelection.css';
import {useHistory} from 'react-router-dom';


export default function GameSelection(props) {
  const history = useHistory();

  const [P1, setP1] = useState('');
  const [P2, setP2] = useState('');


  function joinGame() {

  }

  function createGame() {

  }


  return (
    <div id="gameType">
      <h1>Select Game Type</h1>
      <button block bsSize="small" type="submit" id="pubButton">
          Public
      </button>
      <button onClick={() => history.push('/Game')}>Game</button>
      <button block bsSize="small" type="submit" id="privButton">
          Private
      </button>
    </div>
  );
}
