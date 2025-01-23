// Map method it is a method of array
// map always give new array
const number=[1,2,3,4,5,6,7,8];

const square = function(number){
    return number * number;
} 

// console.log(square(number[3]));

number.map(square); // it also takes callback functionb as input // it will give no output as i said it will give new array

const newMap = number.map(square);

console.log(newMap);

// same but is function ko map k ander bhi use kar skte

// const newMap = number.map( function(number){
//         return number * 2 ;
// });

//  console.log(newMap);

    // by arrow function
    
//  const newMap = number.map( (number) => {
//         return number * 2 ;
// });

//  console.log(newMap);
