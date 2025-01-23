//string is used to manipulated or to store text

//to access only one character of a String

let a = "piyush"
// console.log(a[3]); //print the a[3] elements value like array 

// console.log(a.length); // length is a property

let Name="harry";

let friend="golu";

//console.log("I am " + Name + " and my friend name is " + friend); //this is lengthy process short cut method use templates mean back tick wla

// console.log(`I am ${Name} and my friend name is ${ friend }`);
// well this is templet but when we insert a variable using it then its said to be string interpolation

//Escape sequences same as c like \n \" etc

// console.log(a.toUpperCase()); //.to is function
// console.log(a.toLowerCase());

// using of slice

// console.log(a.slice(3,5)); // means 3 is include but 5 is not
// console.log(a.slice(1));// 1 ko xhor k sab

// console.log(a.replace("yush","chush")); // to replace a string 

// whaT   if their is two letters kie this piyush_yush two time then it will replace frist one only eg in next line

// a="piyush piyush"; // means two nor more occurence doesn't replace only  first occurence will be replaced 
// console.log(a.replace("yush","chush")); 

//concatenate
//adding two string

// let b=" hi priyanshu hai ";

// console.log(a.concat(b));
// console.log(a.concat(b," or mai likhne wla bhi priyanshu hu ")); // we can also use + 
// console.log(b.concat(a));

// console.log(b); // means ek baar string allocate hogai agar to we can't change it ( strings are immutable )
// we have ton create new string samjhe

let string=a.toUpperCase();
console.log(string);
