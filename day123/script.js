// const fetchPromise1 = fetch(
//     "https://mdn.github.io/learning-area/javascript/apis/fetching-data/can-store/products.json",
//   );
//   const fetchPromise2 = fetch(
//     "https://mdn.github.io/learning-area/javascript/apis/fetching-data/can-store/not-found",
//   );
//   const fetchPromise3 = fetch(
//     "https://mdn.github.io/learning-area/javascript/oojs/json/superheroes.json",
//   );

//   Promise.all([fetchPromise1,fetchPromise2,fetchPromise3])
//   .then((responses)=>{
//     for (const response of responses) {
//         console.log(`${response.url}: ${response.status}`);
//     }
//   })
//   .catch((error)=>{
//     console.log(`failed to fetch ${error}`);
//   });

  

  async function myFunc(){
    try{

        const response=await fetch(
            "https://mdn.github.io/learning-area/javascript/apis/fetching-data/can-store/products.json"
            )
            
            if(!(response.ok)){
                throw new error(`HTTP Error ${response.status}`);
            }
            
            const data=await response.json();
            console.log(data[9].name);
            
        }
    catch(error){
        console.error(`could not get products: ${error}`);
    }

    finally{
        console.log("THANK YOU !!!!");
    }

}
myFunc();

// const fetchPromise1 = fetch(
//     "https://mdn.github.io/learning-area/javascript/apis/fetching-data/can-store/products.json",
//   );
//   const fetchPromise2 = fetch(
//     "https://mdn.github.io/learning-area/javascript/apis/fetching-data/can-store/not-found",
//   );
//   const fetchPromise3 = fetch(
//     "bad-scheme://mdn.github.io/learning-area/javascript/oojs/json/superheroes.json",
//   );
  
//   Promise.all([fetchPromise1, fetchPromise2, fetchPromise3])
//     .then((responses) => {
//       for (const response of responses) {
//         console.log(`${response.url}: ${response.status}`);
//       }
//     })
//     .catch((error) => {
//       console.error(`Failed to fetch: ${error}`);
//     });
  