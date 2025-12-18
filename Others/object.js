let  testObj  =  {
	nr:  600,
	str:  "text"
};

console.log(testObj.nr);  //  ->  600
console.log(testObj.str);  //  ->  text
delete testObj.nr;
console.log(testObj.nr);


let  users  =[  
         {
                 name:  "Calvin",
                 surname:  "Hart",
                 age:  66,
                 email:  "CalvinMHart@teleworm.us"
         },
         {
                 name:  "Mateus",
                 surname:  "Pinto",
                 age:  21,
                 email:  "MateusPinto@dayrep.com"
         }
];
   
console.log(users[0].name);  //  ->  Calvin
console.log(users[1].age);  //  ->  21

console.log(users instanceof Array); // -> true

let  names  =  ["Olivia",  "Emma",  "Mateo",  "Samuel"];
console.log(names.indexOf("Mateo"));  //  ->  2
console.log(names.indexOf("Victor"));  //  ->  -1

let  n1  =  names.slice(2);
console.log(n1);  //  ->  ["Mateo",  "Samuel"]
   
let  n2  =  names.slice(1,3);
console.log(n2);  //  ->  ["Emma",  "Mateo"]
   
let  n3  =  names.slice(0,  -1);
console.log(n3);  //  ->  ["Olivia",  "Emma",  "Mateo"]
   
let  n4  =  names.slice(-1);
console.log(n4);  //  ->  ["Samuel"]
   
console.log(names);  //  ->  ["Olivia",  "Emma",  "Mateo", "Samuel"]


