// Can a function return a function like it returns integer , array ,object etc
// the answer is yes it can 
// eg

// callback , function returing function etc are higher order functions those function which take input , acpect or return something
// function myfunction()
// {
//     function hello()
//     {
//         // console.log("hello world");
//         return "hello world";
//     }
//     return hello;
// }

// const a = myfunction(); // using this only to store or ye bine use kr k bhi ho skta bss complicate ni karna chahra

// console.log(a);
// a();
// console.log(a());



function myfunction1()
{
    return function()
    {
        // console.log("hello world");
        return "hello world";
    };

}

 const a1 = myfunction1();

 console.log(a1());
