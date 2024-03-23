const fetchPromise = fetch(
    "https://mdn.github.io/learning-area/javascript/apis/fetching-data/can-store/products.json"
);

fetchPromise
    .then((response) => response.json())
    .then((data) => {
        console.log(data[0].name);
    });

const fetch_promise = fetch(
    "https://mdn.github.io/learning-area/javascript/apis/fetching-data/can-store/products.json"
);

fetch_promise
    .then((response) => {
        if (!(response.ok)) {
            throw new Error(`HTTP REquest ended with status ${response.status}`);
        }

        return response.json();
    })
    .then((data) => {
        console.log(data[0].name);
    });
