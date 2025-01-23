// Create a square of each variable using forEach loop 
// create a new array from an array in which only even numbers exist ( filter method hai)
// create a function to calulate greatest of a number or avg of a first 5 natural number

// let array1=[1,2,3,4,5];


// foreach method

// // array1.forEach((array1) => {
// //         console.log(array1*array1);
// // });

// // console.log(square());

//  const square = (array1) => {
//     console.log(array1*array1);
// };

// array1.forEach(square);


// map method

// let array1=[1,2,3,4,5];

// const newArra = array1.map((array1)=>{
//     return array1**2;
// })

// console.log(newArra);

// Filter method

//filterout  elements ka 

// const number=[1,2,3,4,5,6,7,8,9,10];
// const evenArray = number.filter((num) => {
//     //  return num >3 ;
//     return num % 2 === 0
// })
// console.log(evenArray);

// syntax of reduce arrayName.reduce(( previous value ( result ), current value ) then arrow function)
const number = [1,2,3,4,5];
const avg = number.reduce(  (result,current)=>{
 
  return result + current;
})
console.log(avg/5);

const number1 = [10,2,3,4,5];
const greatest= number1.reduce((result,current) => {
        return  result > current ? result : current;
})

console.log(greatest); 

