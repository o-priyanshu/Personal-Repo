/*
    write a program to calculate factorial of a number by using reduce and also calculate by simple method
*/
// let n1=prompt("enter a number ");
let a=6;
// let i=1,fact =1;

// for( i=1;i<=n1;i++)
// {
//      fact = fact*i;
// }
// console.log(fact);

function factorial(number){
    
    let arr= Array.from(Array(number + 1 ).keys());
    // console.log(arr.slice(1,));
    
    // let c = arr.slice(1,).reduce( (a,b) => {
    //     return a*b;
    // })

    //also can write it like this
    let c = arr.slice(1,).reduce( (a,b) => a*b); 
    // console.log(c);
    return c;
}

console.log(factorial(a));
// factorial(a);