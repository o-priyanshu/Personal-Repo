// map() used to creat new array from orginal array 
let arra=[0,1,2,3,4,5,6,7,8,9,10];

//let newArra=[];

// for(let i=0;i<arra.length;i++)
// {
//     // newArra.push(arra[i]*arra[i]); // or we can do it like
   
//     // newArra.push( arra[i]**2);// for square 

// //     const element=arra[i];
// //     newArra.push(element**2); for cube

//     newArra.push(arra[i]**3);


// } // is puri bhakchodi ko krne ka shortcut

let newArra = arra.map( (x)=>
{
    return x**2;

});
console.log(newArra);

// in map() we  can use index or array also  
// sytax of map = map( value,index,array/arra)

//filter() it is an array with values that passes a test.creates a new array

// const small = (x) => {

//     let a = x<50 ? true : false ; 
//     return a;
// };
// newArra=newArra.filter(small);
//console.log(newArra);

//I can write same thing like this 

//  newArra = newArra.filter((x) => {

//     let a = x>50 ? true : false ; 
//     return a;
// });

// console.log(newArra);


//reduce method , it is an array to a single value ,give final value eg factorial
let series=[1,2,3,4,5,6];

let sum= series.reduce( (x,y) => { // x,y values
 return x+y;
});

console.log(sum);//output total sum 21

// Array from it is used to creat an array from any other object

let ar= Array.from("Priyanshu"); // by storing in other variable
console.log(ar);

console.log(Array.from("Priyanshu"));//normally printing without memory allocation