//callback function

// means kiya hum function mai function pass kara skate hai ? like string array  
//yes you can do this 

// function  func2(){
//     console.log("I am callback function inside a function");
// }

// function myfunc(callback)
// {   
//         console.log("hello there");
//         callback();
// }
// myfunc(func2);


function  func3(name){
    console.log("I am callback function inside a function");
    
    console.log(`Your name is ${name}`);

}

function myfunc1(callback)
{   
        console.log("hello there");
        callback("Priyanshu");
}
myfunc1(func3);