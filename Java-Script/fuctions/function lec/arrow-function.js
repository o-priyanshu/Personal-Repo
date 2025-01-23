// arrow functions

//function declaration or normal function

// function myfunction() 
// {
    //     console.log("hello world");
    // }

//function expression   // actully hum variable mai function assign karte hai both expression or arrow function mai 

    // function myfunction() 
// {
//     console.log("hello world"); 
// }

// arrow function

// const myfunction = () =>  // function delete kar k arrow laga do bss
// {
//     console.log("hello world"); 
// }

// myfunction();

const num = (n) =>
{
    return (n%2) ? false : true ; 
}

console.log(num(1233));


 const chk =  (n) =>
{
    return n % 2 === 0; 
}

console.log( chk(4));


 const firstchar =  (char) =>
{
    //const [...a]=char
    //return  a.slice(0,1); 

    //return char.slice(0,1);

    return char[0];
}

console.log(firstchar("hello")); 


  const index= (target,array) =>
{ 
    for(let a in array)
            if (target === array[a])
                return a; 
    return -1;
}
const array=[1,2,3,45,449,32,11];
console.log(index(11,array));

// if we are passing only one parameter then we can use it withot parenthesis also like 

// const chk =  (n) =>
//     {
//         return n % 2 === 0; 
//     }


//instead of this one we can use it like 

const chk1 = n => // here n is not in parenthesis , only do or is legal when we are passing only one parameter / argument
    {
        return n % 2 === 0; 
    }

    // we can make it more smaller like this 

    
const chk2 = n => n % 2 === 0; // ek hi line mai return kardega 
console.log(chk2(2));
