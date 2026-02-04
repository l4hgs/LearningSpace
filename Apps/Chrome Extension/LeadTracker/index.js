let myLeads = ["ffja.com", "fadsfjakl.com", "kjdklfa.com"]
// const = can't be reassigned
const inputEl = document.getElementById("input-el") 
const inputValue = inputEl.value

const inputBtn = document.getElementById("input-btn")
const ulEl = document.getElementById("ul-el")
inputBtn.addEventListener("click", function() {
    myLeads.push(inputValue)
})

for (let i = 0; i < myLeads.length; i++) {
    // innerHTML to transform string to html tags
    ulEl.innerHTML += "<li>" + myLeads[i] + "</li>"
}

