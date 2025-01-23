// let items=[250,645,300,900,50];
// let items1=[250,645,300,900,50];
// let offer,index=0;


// for( let i of items)
// {
//     offer=i/10;
//     items[index]=i-offer;
//     index++;
// }
// console.log(items);

// offer=0;
// for( let i in items1)
// {
//     offer=items1[i]/10;
//     items1[i]=items1[i]-offer;
// }
// console.log(items1);



// const user=[

//     {userId:"01",name:"Priyanshu thapa",age:"18"},
//     {userId:"02",name:"Aryan kumar",age:"20"},
//     {userId:"03",name:"Divya negi",age:"15"},
//     {userId:"04",name:"Diya chamola",age:"58"},

// ]

// for(const key of user)
// {
//     // console.log(key);// to print whole
//     console.log(key.userId,key.name);// for printing or accessing userid or name only
// }

// console.log(user[1].name);

const obj={
    name:"Priyanshu",
    age:18,
    gender:"Male",
    hobbies:["sleeping","Listening music","drawing"],
    "job role" : "Coder"
}

console.log(obj["age"]);
console.log(obj.hobbies[1]);