// import logo from './logo.svg';
import './App.css';
import Navbar from './components/Navbar';
import Textform from './components/Textform';





function App() {
  return (
    <>
      <Navbar title="Text-Converter" firstLink="home" secondLink="About" />
      <div className="container">
        <Textform heading="Enter the text" />
      </div>
    </>
  );
}

export default App;
