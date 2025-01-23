//Objects in js 

//objects are refrence type

/*
 
arrays are good but not sufficient for real world data

objects store key value pairs . objects don't have index 

*/

//how to create objects

//const person = {name:"Priyanshu",age: 18}; // {} also object letral
// these nam,age are key pairs 

//console.log(person);

//these members are also known as properties listen kid ,Members are in c not in js using it only to relate
//how to access data from objects
 
//console.log(person.age);

// can also store array in objects like

const array={
    name:"Priyanshu",
    age:18,
    gender:"Male",
    //hobbies=[]// error
    //hobbies[1] //error
    hobbies:["sleeping","Listening music","drawing"],
    "job role" : "Coder"
}

// console.log(array.hobbies);

// console.log(array);

//how to add new key value pair 
// 1 method by dot operator/notation

// array.game="pubg";
// console.log(array);

// //2 method by bracket notation

// array["object"]="car";
// console.log(array);


// const key = "email";
// array[key]="priyanshuthapa@gmail.com";
// console.log(array);

//idk but you can see it 

 
    /* let me add key value from a key*/

    
// const key = "email"
// const value3 = "myvalue1";
//    const  obj = {

//                name:"harry",
//                age : "18",
//                "phone number": "0300939",

//      // add a key email  
//    }

//    obj[key]="harrtnigga@gmnail.com";
//    console.log(obj);

//    obj[key]=value3;//adding a key

//    console.log(obj);
//    console.log(obj["phone number"]); // for accessing difference type properties

// To itterate a loop in object we use two methods 

// 1-  for in loop
// 2- object keys

// for in loops

// const array1={
//     name:"Priyanshu",
//     age:18,
//     gender:"Male",
//     //hobbies=[]// error
//     //hobbies[1] //error
//     hobbies:["sleeping","Listening music","drawing"],
//     "job role" : "Coder"
// }

// for(let key in array1) //erase 1 from array if not worked
// {
//     // console.log(key); // gives key name like name ,age
//     // console.log(array1[key]); // gives key value eg priyanshu,18
//     // console.log(key ,array1[key]);
//     // console.log(key , " : " ,  array1[key]);
//     // console.log(key + " : " +  array1[key]);
//     // console.log(`${key} : ${array1[key]}`);
// }



//Object method // it will return object in array

// const array1={
//     name:"Priyanshu",
//     age:18,
//     gender:"Male",
//     //hobbies=[]// error
//     //hobbies[1] //error
//     hobbies:["sleeping","Listening music","drawing"],
//     "job role" : "Coder"
// }

// Object.keys(array1); // you can write itn like this also
// const a=Object.keys(array1); // as I typed earlier if it return a array then see its now in new variable and its returning keys of array1
// // and is going to store in variable a 
// console.log(a);

// console.log(Object.keys(array1));
// to check is it an array 
// let va= Array.isArray(Object.keys(array));
// console.log(va);


// Now iterating object with using Object method 

const array1={
    name:"Priyanshu",
    age:18,
    gender:"Male",
    //hobbies=[]// error
    //hobbies[1] //error
    hobbies:["sleeping","Listening music","drawing"],
    "job role" : "Coder"
}
//     for ( let key of array1)
//     {
//         console.log(array1[key])
//     }  // error have define Object for ( for of loop )
   
    for ( let key of Object.keys(array1))
    {
        // console.log(key); // it will give you keys name
        // console.log(array1[key]);// gives value keys of array1 which is store in let key 
        // console.log(key ,array1[key]);
//     // console.log(key , " : " ,  array1[key]);
//     // console.log(key + " : " +  array1[key]);
//     // console.log(`${key} : ${array1[key]}`);
    }


    //go to object.js in folder question now forward questions