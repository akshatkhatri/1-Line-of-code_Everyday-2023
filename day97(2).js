let btn1=document.querySelector("#btn1");
let counter=0;
let div_click=document.querySelector("div");

btn1.addEventListener("click",()=>{
    if(counter<5){

                console.log("the button was clicked");
                let img=document.createElement("img");
                div_click.after(img);
                
                img.src="./akshat.jpeg";
                img.alt="akshat profile image";
                counter++;
            }
        
            else{
                alert("BSS BHAI RUKJAA");
            }
})
const sample_function=()=>{
    console.log("mouse hovered");
}
btn1.addEventListener("mouseover",sample_function);
btn1.removeEventListener("mouseover",sample_function);

div_click.addEventListener("mouseover",()=>{
    console.log("mouse hovered");
})

let btn2=document.querySelector("#mode");
let curr_mode="light";
let body=document.querySelector("body");

btn2.addEventListener("click",()=>{
    if(curr_mode==="light"){
        curr_mode="dark";
        body.classList.add("dark");
        body.classList.remove("light");
    }
    else{
        curr_mode="light";
        body.classList.add("light");
        body.classList.remove("dark")
    }
    console.log(curr_mode);
})
// btn1.onclick=(event)=>{

//     console.log(event);
//     console.log(event.type,event.clientX,event.clientY);
//     if(counter<5){

//         console.log("the button was clicked");
//         let img=document.createElement("img");
//         div_click.after(img);
        
//         img.src="./akshat.jpeg";
//         img.alt="akshat profile image";
//         counter++;
//     }

//     else{
//         alert("BSS BHAI RUKJAA");
//     }
// }

// div_click.onmouseover=(event)=>{
//     console.log(event);
//     console.log(event.type,event.clientX,event.clientY);
//     console.log("mouse hovered");
// }
