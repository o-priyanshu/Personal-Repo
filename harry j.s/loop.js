// for in loops give key and elemnts or index in array 
//for in for objects 
// let students ={
//     name: "Priyanshu Thapa",
//     age : 18,
//     gender : "Male"
// };
const students ={
    name: "Priyanshu Thapa",
    age : 18,
    gender : "Male",
    " job role ": "coder"
};

console.log(students);
students.salary="5lakh"; // adding more keys to an object
console.log(students);

// for( const key in students  )
// {
//     const elements= students[key];
//     console.log(key);
//     console.log(elements);
    
// }

for( const key in students )
 {
        
        const elements= students[key];
    console.log(key,elements);
    
}

//for of loops used in array here using with strings 
//for of loops are used for iterable of arrays and stings 

for(const fruit of "students" )
{
    console.log(fruit);
}

//parachin loop while loop 

//while() , do while loop