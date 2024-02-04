const myBoolean=true;
const myString="hello world";

const firstnumber=10;
let secondnumber=20;
secondnumber=80;

const myArray=[myBoolean,myString];

const myObject={
    firstproperty:myArray,
    sumProperty:(firstnumber+secondnumber)
};

const variable1=10;
const variable2="20";
const variable3=variable1+variable2;

console.log(variable3);
console.log(typeof(variable3));

console.log(myObject);
console.log(myObject.sumProperty);
console.log(myObject.firstproperty[1]);

// const objvar={
//     prop1:"akshat",
//     prop2:"hellllo",
//     prop3:"hiiii"
// };

// const mymyArray=[20,30,40];
// console.log(mymyArray[3]);
