// create a program which will add all parameters 

function add(...a) 
{
    let sum=0;
    
    for(let i=0; i<a.length ; i++)
    {
        sum=sum + a[i];
    }

    return sum;
}

console.log(add(1,2,3,4,5));



function addAll(...n)  
{
    let sum=0;
    for( let number of n)
    {
        sum=sum + number
    }
    return sum;
}

console.log(addAll(10,20,30,40));