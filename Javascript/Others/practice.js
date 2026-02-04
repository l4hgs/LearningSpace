function Player(name, score) {
    if (!new.target) {
        throw Error("Player must be called with new");
    }
    this.name  = name;
    this.score = score;
    this.sayName = function() {
        console.log(this.name)
    };
}

player1 = new  Player("Alice", 100);
player1.sayName();

function Book(title, author, pages, hasread) {
    if (!new.target) {
        throw Error("must start with new");
    }
    this.title = title;
    this.author = author;
    this.pages = pages;
    this.hasread = hasread;
    this.info = function() {
        console.log(`${this.title} by ${this.author}, ${this.pages} pages, ${this.hasread ? "read" : "not read yet"}`)
    };
}

const book1 = new Book("The Hobbit", "J.R.R. Tolkien", 295, false);
(book1.info());

Object.getPrototypeOf(book1) === Book.prototype; 
console.log(Object.getPrototypeOf(book1) === Book.prototype); // -> true