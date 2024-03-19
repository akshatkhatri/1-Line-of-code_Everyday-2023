const person = {
  name: {
    first: "bob",
    last: "fury",
  },
  age: 32,
  bio() {
    console.log(`${this.name[0]} ${this.name[1]} is ${this.age} years old.`);
  },
  introduceSelf() {
    console.log(`Hi! I'm ${this.name[0]}.`);
  },
};

const person2 = {
  name: "akshat khatri",
  age: 19,

  intro() {
    console.log(`hello i am a js developer and my name is ${this.name}`);
  },
};

const prop_name="age";
const prop_func_name="intro";

console.log(person2[prop_name]);
person2[prop_func_name]();

person.age=21;
person["name"]["last"]="catch_it_fish";

const myDataName = "height";
const myDataValue = "1.75m";

person[myDataName]=myDataValue;

