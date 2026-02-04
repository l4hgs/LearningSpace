let num1 = 8
let num2 = 2
document.getElementById("num1-el").textContent += num1
document.getElementById("num2-el").textContent = num2

let sumEl = document.getElementById("sum-el")
let result

function add() {
    result = num1 + num2
    sumEl.textContent = "Sum: " + result
}

function subtract() {
    result = num1 - num2
    sumEl.textContent = "Sum: " + result
}

function divide() {
    result = num1 / num2
    sumEl.textContent = "Sum: " + result
}

function multiply() {
    result = num1 * num2
    sumEl.textContent = "Sum: " + result
}