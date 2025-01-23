// In JavaScript, variables are used to store data, and data types represent the kind of data that a variable can hold. Here’s a breakdown:


// ---

// Declaring Variables

// 1. var: Old way of declaring variables (function-scoped, can be re-declared).


// 2. let: Modern way to declare variables (block-scoped, cannot be re-declared in the same scope).

// 3. const: For variables that should not be re-assigned (block-scoped).



// Example:

// let x = 10;
// const y = "Hello";
// var z = true;


// ---

// Data Types in JavaScript

// 1. Primitive Data Types:

// Number: Numeric values (integer or floating-point).

// let num = 42;

// String: Sequence of characters.

// let str = "JavaScript";

// Boolean: Logical values (true or false).

// let isActive = true;

// Undefined: A variable that has been declared but not assigned a value.

// let a;
// console.log(a); // undefined

// Null: Represents an intentional absence of any value.

// let b = null;

// Symbol: Used for unique identifiers (introduced in ES6).

// let sym = Symbol("unique");

// BigInt: For numbers larger than the Number type can safely represent.

// let bigNum = 123456789012345678901234567890n;



// 2. Non-Primitive Data Types:

// Object: Used to store collections of data or more complex entities.

// let person = {
//   name: "John",
//   age: 30,
// };

// Array: A special type of object used for storing lists.
 
// let fruits = ["Apple", "Banana", "Cherry"];

// Function: A callable object.

// function greet() {
//   console.log("Hello!");
// }





// ---

// Dynamic Typing

// JavaScript is dynamically typed, meaning a variable can hold any type of value and its type can change:

// let x = 5;        // Number
// x = "Hello";      // Now a String
// x = true;         // Now a Boolean
  
