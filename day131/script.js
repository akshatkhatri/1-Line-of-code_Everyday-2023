// console.log("first");

// setTimeout(()=>{
//     console.log("timeout")
// },5000);

// console.log("three");

// function sum(a,b){
//     console.log(a+b);
// }

// function calculator(a,b,sumCallback){
//     sumCallback(a,b);
// }

// calculator(5,7,sum);

// function getData(dataid){
//     setTimeout(()=>{
//         console.log("data ",dataid);
//     },3000);
// }

// let myPromise=new Promise ((resolve,reject)=>{
//     console.log("This is my promise");
//     resolve("this promise is resolved");
// })

const form = document.getElementById("dataForm");

form.addEventListener("submit", (event) => {
    event.preventDefault();
    const userId = document.getElementById("userId").value;

    let myPromise = getData(userId);

    myPromise
        .then((res) => {
            console.log("Access authorized", res);
        })
        .catch((err) => {
            console.error("unauthorized access", err);
        });
});

function getData(dataid) {
    return new Promise((resolve, reject) => {
        console.log("processing your request.....");

        if (dataid > 2000) {
            reject("unauthorized access");
            return;
        }

        setTimeout(() => {
            console.log("data", dataid);
            resolve("success");
        }, 5000);
    });
}

// function asyncfunc() {
//     return new Promise((resolve, reject) => {
//         setTimeout(() => {
//             console.log("data 1");
//             resolve("success");
//         }, 5000);
//     });
// }

// function asyncfunc2() {
//     return new Promise((resolve, reject) => {
//         setTimeout(() => {
//             console.log("data 2");
//             resolve("success");
//         }, 5000);
//     });
// }

// const p1 = asyncfunc();

//const p2=asyncfunc2();
// console.log("fetching data 1....");
// p1.then((res)=>{
//     console.log(res);
// })

// console.log("fetching data 2....");
// p2.then((res)=>{
//     console.log(res);
// })

// console.log("fetching data 1....");
// asyncfunc().then((res) => {
//     console.log("fetching data 2....");
//     asyncfunc2().then((res) => {
//         console.log(res);
//     });
// });

// console.log("fetching data 1....");
// asyncfunc().then((res)=>{
//     console.log("fetching data 2...");
//     return asyncfunc2();
// })
// .then((res)=>{
//     console.log(res);
// })


// async function hello(){
//     setTimeout(()=>{
//         console.log("hello world");
//     },4000);
// }

// function api(){
//     return new Promise ((resolve,reject)=>{
//         setTimeout(() => {
//             console.log("weather data .... rainy");
//             resolve(200);
//         }, 4000);
//     });
// }

// async function getWeather(){
//     await api();
//     console.log("awaited");
// }


// function asyncfunc() {
//     return new Promise((resolve, reject) => {
//         setTimeout(() => {
//             console.log("data 1");
//             resolve("success");
//         }, 5000);
//     });
// }

// function asyncfunc2() {
//     return new Promise((resolve, reject) => {
//         setTimeout(() => {
//             console.log("data 2");
//             resolve("success");
//         }, 5000);
//     });
// }

// async function getAllData() {
//     await asyncfunc();
//     await asyncfunc2();
// }

function getData(dataid) {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            console.log("data ", dataid);
            resolve(200); 
        }, 3000);
    });
}

(async function() {
    console.log("getting data 1....");
    await getData(1);
    console.log("getting data 2....");
    await getData(2);
    console.log("getting data 3....");
    await getData(3);
    console.log("getting data 4....");
    await getData(4);    
})();