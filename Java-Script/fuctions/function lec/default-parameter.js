// default parameters

//this was used before ES5
function add(a,b) // this is used when 1 value is passed and 2 is not so to handel it we were doing this
{
    if( typeof b==="undefined")
    {
        b=1;
    }
        return a+b;
}
console.log(add(4)); // output will  be 5

//modern ways to tackel it by default values


function add1 (a,b=1) // this is default if value is not passed it will take assigned value
{
        return a+b;
}
console.log(add(4)); 

function add1 (a=5,b=1) 
{
        return a+b;
}
console.log(add()); // output =Nan bcz have to pass atleast one value
