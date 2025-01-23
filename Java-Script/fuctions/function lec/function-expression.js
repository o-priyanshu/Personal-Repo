// FUNCTION expression is in LINe number 68
// also know to be anonymous expression

// create a function for odd and even number if its even the its output will be true if not tham false
// input as number

const num = function(n)
{
    return (n%2) ? false : true ; 
}

console.log(num(1233));

//is se bhi chota or better way to write in js

 const chk = function (n)
{
    return n % 2 === 0; // unlike In C, where conditional statement return 0 or 1 here it will return true or
}

console.log( chk(1233));

//create a function which will take input as a string and it will give output as a first character of a string

 const firstchar = function (char)
{
    //const [...a]=char
    //return  a.slice(0,1); 

    //return char.slice(0,1);

    return char[0];
}

console.log(firstchar("hello")); 

// create  a function which will take an array , target and the target  is number and find this number in this array 
// if the target is in array print or return index of target
// eg array[1,2,3,4,5,6,,7] , target is 3 then output will be index no 2

//  const index = function (target)
// {
//     const number=[1,2,3,4,5,6,7,8,9,10];
    
//     for(let index in number)
//             if (target === number[index])
//                 return index; 
//     return -1;
// }

// console.log(index(1)); // its also good but we are not passing array like in question so

// You can also use traditional for loops or any loops just logic ana chahiye

//  const index = function (target,array)
// { 
//     for(let a in array)
//             if (target === array[a])
//                 return a; 
//     return -1;
// }

// const array=[1,2,3,45,449,32,11];
// console.log(index(11,array));

// these all functions are function declaration Now we will learn about function expression half part is in function expression 

// FUnction expresion

// function expression means storing a function in a variable 
//eg

// function myfunction() // This normal function and expression function is same the only differ is it function name can also used asvariable 
// {
//     console.log("hello world"); 
// }

const myfunction = function()
{
  console.log("hello world");   
}

myfunction();
// console.log(myfunction);

  const index=function (target,array)
{ 
    for(let a in array)
            if (target === array[a])
                return a; 
    return -1;
}

const array=[1,2,3,45,449,32,11];

// console.log(index(11,array));

// console.log(index);