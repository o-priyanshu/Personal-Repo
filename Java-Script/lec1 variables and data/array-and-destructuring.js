//how can we use array

let array=[];
let v=[1,2,3,5,4,45];

//let v[4]; //can't initialise it like this 


//array destructuring most used

// we have to store 1 element in 1 variable and 2 in other vairable

const myArray=["value1","value2","value3","value4"];
// let a,b;

// a=myArray[0];
// b=myArray[1];

//console.log(`value at 0th '${a}' and value at 1th '${b}'\n `,a,b);

//their is a shortcut to do this in js 


                        // let [a,b]= myArray;
                        // a="hero tera";
                        // b=1;
                        // console.log(`\tvalue at 0th '${a}' and value at 1th '${b}'\n\n `,a,b);

                        // let [a1,a2,a3,a4]=myArray;
                        // console.log("\n\n",a1,a2,a3,a4); // print up to a3 then undefined
                        
                        //can't change bcz constant myArrray thats why using pop or shift
                        // myArray.pop();
                        // myArray.pop();
                        // myArray.shift();
                        // let [c1,c2,c3]=myArray;
                        // console.log("\n\n",c1,c2,c3);//give undefined because myArray have only 1 element and it will assign to 1 element c1 

 //if i want to assign the value "valu3 or value4/2" to any element unlike assigning it same use like this then

//  let [d1, /*skips the index by "comma ,"*/ , d2,d3]=myArray;
//  console.log("\n\n",d1,d2,d3);

//to creat array consisting of elements excpect 1,2 elements 
// let newArray = myArray.slice(2,);
// console.log(newArray);


// ye upper jitna bhi kiya us saab ka shortcut
let [m1,m2,...shortcut] =myArray;
console.log(shortcut); // store rest elements means m1,m2 store value1 and value2