import React, { useState } from 'react'

export default function Textform(props) {
    const handleUpClick = () => {
        console.log("uppercase was clicked");
        setText(text.toUpperCase());
    }
    const handleOnChange = (event) => {
        console.log("value changed");
        setText(event.target.value);
    }
    const handleLoClick = () => {
        console.log("lowercase was clicked");
        setText(text.toLowerCase());
    }

    const handleStartOnchange=(event)=>{
        console.log("start fired");
        setStartIndex(event.target.value);
    }

    const handleLastOnchange=(event)=>{
        console.log("Last fired");
        if(event.target.value==0){
            setLastIndex(text.length);
        }
        setLastIndex(event.target.value);
    }

    const handleSubstrClick=()=>{
        const start=startIndex===""?0:parseInt(startIndex);
        const last=lastIndex===""?text.length:parseInt(lastIndex);

        const startIndexValid=startIndex>=0 && startIndex<=text.length;
        const lastIndexValid=lastIndex>=0 && lastIndex<=text.length;

        if(startIndexValid && lastIndexValid){
            setSubstring(text.slice(start,last));
        }
        else{
            alert("invalid text input");
        }
    }

    const [text, setText] = useState('');
    const[startIndex,setStartIndex]=useState('0');
    const[lastIndex,setLastIndex]=useState('0');
    const[subString,setSubstring]=useState('');
    return (
        <>
            <div>
            <h1>{props.heading}</h1>
            <div className="mb-3">
                <textarea className="form-control" value={text} onChange={handleOnChange} id="myBox" rows="8"></textarea>
            </div>
            <button className="btn btn-primary mx-5" onClick={handleUpClick}>Convert to uppercase</button>
            <button className="btn btn-primary" onClick={handleLoClick}>Convert to Lowercase</button>

            <div className="form-floating mb-3  my-4">
                <input type="number" onChange={handleStartOnchange} className="form-control" id="floatingInput" placeholder="name@example.com"/>
                    <label htmlFor="floatingInput">Starting index of character(by default start)</label>
            </div>
            <div className="form-floating my-4">
                <input type="number" onChange={handleLastOnchange} className="form-control" id="floatingPassword" placeholder="Password"/>
                    <label htmlFor="floatingPassword">last index of character (by default end)</label>
            </div>

            <button className="btn btn-primary" onClick={handleSubstrClick}>Extract the string</button>
            <h2>Extracted text is </h2>
            <p className='my-5'>{subString}</p>
        </div>
        <div className="container my-3">
            <h2>Your Text Summary:</h2>
            <p>{text.split(" ").length}words and {text.length} characters</p>
            <p>{0.48 * text.split(" ").length} seconds required to read this</p>
            <h2>Your text preview</h2>
            <p>{text}</p>
        </div>
        </>
    )
}
