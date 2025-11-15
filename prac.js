// let countries = ["Tuvalu", "India", "USA", "Indonesia", "Monaco"]

// countries.shift(); //removes first element
// countries.unshift("Pakistan") // adds at first element
// countries.unshift("China")
// countries.pop()
// for (let i = 0; i < countries.length; i++) {
//     console.log("- " + countries[i])
// }

/* let randomIndex = Math.floor(Math.random() * 3)

let hands = ["rock", "paper", "scissors"]

console.log(hands[randomIndex]) */

const basePrice = 520
const discount = 120
let shippingCost = 12
let shippingTime = "5-12 days"

shippingCost = 15
shippingTime = "7-14 days"

const fullPrice = basePrice - discount + shippingCost

console.log("Total cost: " + fullPrice + ". It will arrive in " + shippingTime)