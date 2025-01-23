/* challenge faulty calculator

    this faulty calculator does following:

  1.  takes two number as input from the user 
  2. It performs wrong operations as follows :
  
  + ---> -
  * ---> +
  - ---> /
  / ---> **  
  
  It performs wrong operation 10% of the times 

*/

let random=Math.random();

let a=Number(prompt("Enter your first number "));
let b=Number(prompt("Enter your second number "));
let operation=prompt("which type of operation you want to perform with these numbers ");

// to do same shit in pero why
let perform = {
    '+' : '-',
    '-' : '/',
    '*':'+',
    '/':'**'
}
if(random<0.1)
    {
     let c=perform[operation];
    //wrong
    alert(`The result is ${eval(`${a} ${c} ${b}`)}`);
}
else
alert(`The result is ${eval(`${a} ${c} ${b}`)}`);
// if(random < 0.1)
// {   
//     //performing wrong one
//     switch( operation )
//     {
//         case  '+' : console.log(a-b) ; break;
//         case  '-' : console.log(a/b) ; break;
//         case  '*' : console.log(a+b) ; break;
//         case  '/' : console.log(a**b) ; break;
//         default : console.log("Invalid number");
//     }    

// }
   
// else 
// { 
//     switch( operation )
//     {
//         case  '+' : console.log(a+b) ; break;
//         case  '-' : console.log(a-b) ; break;
//         case  '*' : console.log(a*b) ; break;
//         case  '/' : console.log(a/b) ; break;
//         default : console.log("Invalid number");
//     }    
// }
/* challenge faulty calculator

    this faulty calculator does following:

  1.  takes two number as input from the user 
  2. It performs wrong operations as follows :
  
  + ---> -
  * ---> +
  - ---> /
  / ---> **  
  
  It performs wrong operation 10% of the times 

*/
let result;

if(Math.random()<0.1)
{
    //wrong
    function faulty(a,b)
{
    if( operation === '+' )
    {
        result=a-b;
        return result;
    }
    else if(operation === '-' )
    {
        
        result=a/b;
        return result;
    
    }

    else if(operation === '*' )
    {
        
        result=a+b;
        return result;
    
    }
    
    else if(operation === '/' )
    {
        
        result=a**b;
        return result;
    
    }

    }
    
}
else {
function faulty(a,b)
{
if( operation === '+' )
{
    result=a+b;
    return result;
}
else if(operation === '-' )
{
    
    result=a-b;
    return result;

}

else if(operation === '*' )
{
    
    result=a*b;
    return result;

}

else if(operation === '/' )
{
    
    result= a/b;
    return result;

}

 }

}
let output=faulty(a,b);
console.log(output);