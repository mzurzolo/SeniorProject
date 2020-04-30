import React from 'react';
import './GamePicture.css';

export default function GamePicture() {
  return (
    <div id="board-photo">
      <img src={'/Assets/board.png'} style={{backgroundImage: '/Assets/board.png'}}/>
    </div>
  );
}
