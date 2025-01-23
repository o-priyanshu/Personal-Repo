//Important methods of array method

// forEach
// map  // most imp or most used
// filter 
// reduce


const array = [ 1,2,3,4,5,6,7,8,9,10]; // limitation accessing ileggal memory by  0 <= 10

// function sq(number)
// {
//     let sum;
//     for ( const index of number )
//     {
//         sum=number[index] * 2;
//         console.log(`index number ${index}  value ${number[index] } mul ${sum}`);
        
//     }
// }

//  sq(number);



// function multiply(number,index) // you can define this function within forEach loop also eg is at end
// {
//     // console.log("number : " , number);
//     console.log("\nindex : " , index);
//     console.log( `${number}*2 =  ${ number*2 }`);

// }

// multiply(number[1],1); //what if i want to do this repeadtedly

// for( let i=0 ; i<array.length ; i++)
// {
//         multiply(array[i],i);
// }


// shortcut we don't have to use loops for this we can easily do this by foreach 


//array.forEach(multiply); // foreach takes another function (callback) as an input 
// ye khud hi array ki value or indexd le kr kam kr dega

// your can se if we pass funtion having array in it for Each loop will by default give value and index of that array

//deinfing a function with in a foreach loop

// array.forEach( function(number,index) // here function is anonymous bcz it doesn't have a name we are giving parameters while foreach is  is passing arguments
// {
//     console.log("\nindex : " , index);
//   console.log( `${number}*2 =  ${ number*2 }`);
// });

// in real life

const user = [

    {firstName: "Priyanshu",age : "18",gender : "Male"},
    {firstName: "divya",age : "20",gender : "feMale"},
    {firstName: "aryan",age : "18",gender : "Male"},
    {firstName: "khushi",age : "15",gender : "feMale"}
]
// print only age or first name

// for( let key of user)
// {
//   console.log(key.firstName);
// } 

//let me use foreach loop for this

// user.forEach(function(user)
// {
//     console.log(user.firstName );
// })


// now by arrow function in forEach

user.forEach( (user) => {
        console.log(user.firstName);
        console.log(user.gender);
})
 