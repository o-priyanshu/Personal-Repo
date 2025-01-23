// nested destructuring
const user=[

    {userId:"01",name:"Priyanshu thapa",age:"18"},
    {userId:"02",name:"Aryan kumar",age:"20"},
    {userId:"03",name:"Divya negi",age:"15"},
    {userId:"04",name:"Diya chamola",age:"58"},

]

// const [a,b,c]=user; // normalway vohi same a , b , c vairiable mai ek ek object store ho jyga means a will store full object  
// console.log(a,b,c);

// BUt what if I want to store name of every elemnts only

// const [{name},,{age}]=user; // it like this pehle object mai se mujhe shirf name chahiye ,2 wle se kuch ni and 3 wale se age chahiye
// console.log(name,age);

// const [{age:a}, , ,{name:b}]=user;// kissi or varibale mai store hogya ab or name change
// console.log(a,b);


// NOw I want user id and age also two thing or more things from one object

const [{name: firstName,userId:user1},,,{age:a1,userId:b1}]=user; // or you can simply write userId also its also valid I am changing name also so that why
console.log(firstName,user1,a1,b1);