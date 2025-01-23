//Spread  Operator
//used for cloning array or objects

//using spread operator in array 

// const array1=[1,2,3,4,5,6];
// const array2=[7,8,9,10];

// const array3=[...array1];
// console.log(array3); // array1 k sare elements array3 mai store hogye or spread hogye 

// const array10=["priyanshu","hello" ,"hii"];

//  // meansd pehle array1 k elements then array10 k

// const array4=[...array1,...array10];
// console.log(array4);

//  // meansd pehle array10 k elements then array1 k

// const array5=[...array10,...array1];
// console.log(array5);

//what if I don't use ...(spread opearator)

// const array10=["priyanshu","hello" ,"hii"];
// const array1=[1,2,3,4,5,6];

// Unlike array10 jiss k sare elements spread honge array23 mai means array1 k sare elements are also part of array23 
// PR ye array1 pura ek element ban jyga array23 
// const array23=[array1,...array10];
// console.log(array23);

// const array23=[array1,...array10,"jai",90,89]; // u can use it like this also
// console.log(array23);

// We can spread strings also by using spread operator like

// let array10=["priyanshu","hello" ,"hii"];

// let array23=[..."hello"]
// console.log(array23);

// array23=[...array10[0]];
// console.log(array23);

// NOte you can't do this with number or integers like

// array23=[...12334354];
// console.log(array23); give you error 

// array23=[..."12334354"]; // u can us eit like this 


// spread operators in objects

// const object={
//     name : "priyanshu",
//     age : "18",
//     age : "19"  // same key can't be in one object like in this case we have same key named "age" we can do this but is not a good practice 
//     // output of age will be 19 because it will overwrite it as I said only on key can exist in object
// }


// const oyoho={
//     name : "aryan",
//     age : "19",
    
// }

// const newObject ={...object,...oyoho} ; // Output will be only name : aryan , age : 19 bcz 
// //as i said in object no repeated keys are allowed and jo baad mai update hui vo value hi aygi

// console.log(newObject); // baki spread same hai jaise array mai tha

// You can add key also like you did in arrays by adding sting or number you can do same her with object

// const addObject={
//     name : "Mayank",
//     age : "19",
    
// }

// const add={...addObject, gender : "male"}
// console.log(add);



let moreSpread={ ..."volvo"} // ouput will be like this index number  0th : v , 1th : o etc 
// means index number tumhra key ban jyga or baki sab ko vo spread kar k key value bana dega
console.log(moreSpread);

moreSpread={...[]};
console.log(moreSpread);

moreSpread={...[1,2,3,"string"]};// same as above no change index will be key and value will be spread but here string will  not spread 
// bcz its  a element of array thats it number is also element if we write string like previous one then it will spread
console.log(moreSpread);

