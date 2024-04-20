// const URL="https://meowfacts.herokuapp.com/"
// const catFact=document.querySelector("#fact1");
// const catBtn=document.querySelector("#catbtn");

// // let promise=fetch(URL);
// // console.log(promise); 

// const getFacts=async ()=>{
//     console.log("getting data ....");
//     let response=await fetch(URL);
//     console.log(response); 
//     let dataCat=await response.json();
//     catFact.innerText=dataCat.data[0];
// }
// catBtn.addEventListener("click",getFacts);


const URL = "https://meowfacts.herokuapp.com/";
const catFact = document.querySelector("#fact1");
const catBtn = document.querySelector("#catbtn");

const getFacts = async () => {
    try {
        console.log("getting data ....");
        let response = await fetch(URL);
        if (!response.ok) {
            throw new Error('Network response was not ok');
        }
        let dataCat = await response.json();
        catFact.innerText = dataCat.data[0];
    } catch (error) {
        console.error('Error fetching data:', error);
        catFact.innerText = "Failed to fetch cat fact. Please try again later.";
    }
};

