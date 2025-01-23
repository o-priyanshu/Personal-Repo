// Objects inside array
// Very useful in reallife/real world application

// const user=[

//     {userId:"01",name:"Priyanshu thapa",age:"18"},
//     {userId:"02",name:"Aryan kumar",age:"20"},
//     {userId:"03",name:"Divya negi",age:"15"},
//     {userId:"01",name:"Diya chamola",age:"58"},

// ]
// console.log(user);

//iterating array inside object 
// Note : you can use any loop for iteration but for of and for in are good one\

const user=[

    {userId:"01",name:"Priyanshu thapa",age:"18"},
    {userId:"02",name:"Aryan kumar",age:"20"},
    {userId:"03",name:"Divya negi",age:"15"},
    {userId:"04",name:"Diya chamola",age:"58"},

]

for(const key of user)
{
    // console.log(key);// to print whole
    console.log(key.userId,key.name);// for printing or accessing userid or name only
}