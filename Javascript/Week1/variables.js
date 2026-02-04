let number = 123;
number = 12;
console.log(number);

const pi = 3.14;
console.log(pi);

const obj = { a: 3 };
// obj = { a: 5 }; // not allowed - reassigning a const variable is not allowed
obj.b = 5;  // allowed
obj.a = 10;
console.log(obj); //{ a: 10, b: 5 }

let num = 10%3;
console.log(num); // 1

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// STRINGS
let str1 = '1' + 1;
console.log(str1); // "11" - concatenation of string and number results in a string

let myString1 = "Hello";
let myString2 = "World";
// `${myString1} ${myString2}!` //Hello World!
// `${myString1}, ${myString2}!` //Hello, World!
// use backticks, embed variables using ${}, and preserve spaces or formatting
console.log(`${myString1} ${myString2}!`); //Hello World!
console.log(`${myString1}, ${myString2}!`); //Hello, World!

let name = "ricco";
console.log(`Hello, ${name}!`); //Hello, ricco!

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// BOOLEAN
// false values = false, 0, "", null, undefined, NaN, -0, 0n 
if ([]) {
  console.log("arrays are truthy");
}

// truthy and falsy in logical operators
console.log("hello" && 0 && "world") // 0
console.log("hello" && "world")     // "world"

console.log("" || "default")   // "default"
console.log(0 || 42)           // 42

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// FUNCTIONS

function printHello(name) {
    console.log(`Hello, ${name}`);
}
console.log(printHello("Ricco")); // Hello, Ricco

console.log(typeof printHello); // function
console.log(printHello instanceof Function); // true

// anonymous function
setTimeout(function() {
    console.log("Hello after 2 seconds");
}, 2000);
const add = function (a, b) {
  return a + b;
};
console.log(add(2, 3)); // 5

setTimeout(function () {
  console.log("Runs after 1 second");
}, 1000);

// button.addEventListener("click", function () {
//   console.log("Clicked");
// });

// arrow function
const multiply = (a, b) => a * b;
console.log(multiply(2,3)); // 6



//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// CONDITIONALS
let status = 200;
const message = status === 200 ? "OK" : "ERROR";
console.log(message); // OK

//ternary operator can be nested
const score = 85;
const grade = score >= 90 ? "A" : score >= 80 ? "B" : score >= 70 ? "C" : "F";
console.log(grade); // B

let firstNumber = 20;
let secondNumber = 10;
let biggestNumber = firstNumber > secondNumber ? firstNumber : secondNumber;

// if else
let biggestNUM;
if (firstNumber > secondNumber) {
  biggestNUM = firstNumber;
} else {
  biggestNUM = secondNumber;
}


//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// ARRAYS

// Your ice cream shop's flavor menu
const iceCreamFlavors = ["Chocolate", "Strawberry", "Vanilla", "Pistachio", "Rocky Road"];

// A user's profile info (mixing different types of data)
const userData = ["John", 25, true, "developer"];

// Test scores for your favorite class
const scores = [95, 87, 92, 78, 85];
iceCreamFlavors.pop(); // removes "rocky road"
iceCreamFlavors.push("Mint") // adds "Mint" at the end
iceCreamFlavors.shift(); // removes "Chocolate" or the first element
iceCreamFlavors.unshift("Bang"); // adds "bang" at the start   
iceCreamFlavors[2] = "Vanilla Bean"; // modifies the 3rd element
console.log(iceCreamFlavors); // ["Bang", "Strawberry", "Vanilla Bean", "Pistachio", "Mint"]

const fruits = ["apple", "banana", "orange"];
// Find elements
const index = fruits.indexOf("banana"); // Returns 1 (position of "banana")
const hasApple = fruits.includes("apple"); // Returns true

let arrayyy = [1, 2, 3, 4, 5];
console.log(arrayyy[100]); // undefined




//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// LOOPS
// Counting from 0 to 9
for (let i = 0; i < 10; i++) {
  console.log(`Count: ${i}`);
}

// More practical example: processing scores
const testScores = [85, 92, 78, 96, 88];
for (let i = 0; i < testScores.length; i++) {
  console.log(`Student ${i + 1}: ${testScores[i]}%`);
}

// Basic counting example
let i = 0;
while (i < 10) {
  console.log(`While count: ${i}`);
  i++; // Don't forget to increment!
}

// let userInput = "";
// let attempts = 0;
// const maxAttempts = 3;

// while (userInput !== "quit" && attempts < maxAttempts) {
//   userInput = prompt(`Enter 'quit' to exit (attempt ${attempts + 1}):`);

//   if (userInput === null) {
//     console.log("User cancelled.");
//     break;
//   }

//   attempts++;
// }

// if (attempts >= maxAttempts && userInput !== "quit") {
//   console.log("Maximum attempts reached!");
// }


const colors = ["red", "green", "blue", "yellow"];

// Modern approach - cleaner and safer
for (const color of colors) {
  console.log(`Color: ${color}`);
}

// Compare with traditional for loop
for (let i = 0; i < colors.length; i++) {
  console.log(`Color: ${colors[i]}`);
}

const prices = [9.99, 15.50, 22.75, 8.25];

// Using forEach for functional programming style
prices.forEach((price, index) => {
  console.log(`Item ${index + 1}: $${price.toFixed(2)}`);
});

// forEach with arrow functions for simple operations
prices.forEach(price => console.log(`Price: $${price}`));