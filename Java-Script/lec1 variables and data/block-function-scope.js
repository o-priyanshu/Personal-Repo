// function myFunction() {
//     if (true) {
//         var x = 5; // Function-scoped
//     }
//     console.log(x); // Accessible here because it's in the same function
// }

// myFunction();
// // Output: 10
// var mi=5;

// function bibi() {
//     if (true) {
//         let x = 10; // Block-scoped
//       const y = 20; // Block-scoped
//       console.log(x); 
//       console.log(y+mi);// Accessible here
//     }
//     // console.log(x); // Error: x is not defined (outside the block)
//   }
  
//   bibi();
    let a= 10;
  {
     a=66;
    console.log(a);
    let b=50;
    console.log(b);
}
console.log(a);
console.log(b);//undefined because the scope of let b is block scoped
  
var b= 5;
  {
   // var a=66;
   a=15;
    console.log(a);
    b=20;
    console.log(b);
  }
console.log(b);// mai ni chahta tha niche wle ka badle