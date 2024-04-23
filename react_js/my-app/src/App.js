// import logo from './logo.svg';
import { useState } from 'react';
import './App.css';
import Navbar from './components/Navbar';
import Textform from './components/Textform';


function App() {
  const [darkmode,setDarkmode]=useState("light");
  return (
    <>
      <Navbar title="Text-Converter" firstLink="home" secondLink="About" mode={darkmode}/>
      <div className="container">
        <Textform heading="Enter the text" />
      </div>
    </>
  );
}

export default App;
