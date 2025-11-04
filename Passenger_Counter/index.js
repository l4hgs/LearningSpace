let count = 0
let countEl = document.getElementById("count-el")
// the DOM (Document Object Model) or how u use js to modify a website
function increment() {
    count += 1
    countEl.innerText = count
}

function decrement() {
    count -= 1
    countEl.innerText = count
}

let saveEl = document.getElementById("save-el")

function save() {
    let countStr = " " + count + " - "
    saveEl.innerText += countStr
    console.log(count)
}
