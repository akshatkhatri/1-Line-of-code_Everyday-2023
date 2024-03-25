const output = document.querySelector("#output");
const button = document.querySelector("#set-alarm");
const name_ = document.querySelector("#name");
const delay = document.querySelector("#delay");
const imgDiv=document.querySelector("#img_div");
// function setalarm(){
//     setTimeout(() => {
//         output.textContent="wake up bird wake up"
//     }, 1000);
// }
// button.addEventListener("click",setalarm);

function alarm(person, delay) {
  return new Promise((resolve, reject) => {
    if (delay < 0) {
      throw new Error("value cannot be negative");
    }
    setTimeout(() => {
      resolve(`wake up ${person}`);
    }, delay);
  });
}

button.addEventListener("click", () => {
  alarm(name_.value, delay.value)
    .then((message) => {
      output.textContent = message;
      let img_obj = document.createElement("img");
      img_obj.src =
        "https://cdn4.sharechat.com/img_223854_12a247a_1669615220406_sc.jpg?tenant=sc&referrer=pwa-sharechat-service&f=406_sc.jpg";

      imgDiv.append(img_obj);
    })
    .catch((error) => {
      output.textContent = `couldn't set alarm : ${error}`;
    });
});
