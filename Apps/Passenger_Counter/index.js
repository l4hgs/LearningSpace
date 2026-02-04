let count = 0 // initialize
let countEl = document.getElementById("count-el") // counter
let saveEl = document.getElementById("save-el") // for printing
// the DOM (Document Object Model) or how u use js to modify a website

function increment() {
    count += 1
    countEl.textContent = count
}

function decrement() {
    count -= 1
    countEl.textContent = count
}

function save() {
    let countStr = count + " - "
    saveEl.textContent += countStr
    countEl.textContent = 0
    count = 0
}
