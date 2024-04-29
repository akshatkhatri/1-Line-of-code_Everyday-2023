
import './App.css';

import React from 'react'
import Square from './Components/Square';

function Board() {
  return (
    <>
    <div className='board-row'>
    <Square/>
    <Square/>
    <Square/>
    </div>

    <div className='board-row'>
    <Square/>
    <Square/>
    <Square/>
    </div>

    <div className='board-row'>
    <Square/>
    <Square/>
    <Square/>
    </div>
    </>
  )
}

export default Board
