let btnClick=document.querySelector("button");

btnClick.addEventListener("click",()=>{
    console.log("event fired");
    let user_consent=confirm("are u sure??");
    console.log(user_consent);
})