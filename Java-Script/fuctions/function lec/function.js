// basic funtions

// anonymous function are those functions which are not named or which do not have a name 

// function myfunction() // ban gya naukar
// {
//     console.log("hello world"); //function k ander vo likho jo bar bar karna hai function se kuch bhi ho skta hai 
// }

// myfunction();// calling a function , invoking a function

// create a function to add two numbers or printf 


// function add()
// {
//     //console.log(2+4); // for printing

//     return 2+4; // returning a value
// }

//direct printing value without storing it

// console.log(add());

// by storing return value in a variable

// const a =add();
// console.log(a);

// now passing parameter or arguments 

// function sum(a,b) // its parameter means a and b are parameter . also know as variable
// {
//      return a+b;
// }

// const pass=sum(5,5);
// console.log(pass);

// creating for three variable

// if you  didnot pass a value it will give NaN ( not a number ) same for passing 2 values for 3 parameter lists
function sum(a,b,c) // its parameter means a and b are parameter . also know as variable
{
     return a+b+c;
}

const pass=sum(5,5,6);
console.log(pass);