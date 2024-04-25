// import logo from './logo.svg';
import { useState } from 'react';
import './App.css';
import Navbar from './components/Navbar';
import Textform from './components/Textform';


function App() {
  const [darkmode, setDarkmode] = useState("light");
  const togglemode=()=>{
    if(darkmode==="light"){
      setDarkmode("dark");
      document.body.style.backgroundColor="#042743";
    }

    else{
      setDarkmode("light");
      document.body.style.backgroundColor="white"
    }
  }
  return (
    <>
      <Navbar title="Text-Converter" firstLink="home" secondLink="About" mode={darkmode} togglemode={togglemode} />
      <div className="container">
        <Textform heading="Enter the text" mode={darkmode} />
      </div>
    </>
  );
}

export default App;
