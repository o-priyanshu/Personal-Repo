// filter out marks of student who have scored above 90 or 90 from an array
// take a number from user n calculate the sum of number from 1 to n 
// and calcute product of numbers


const marks=[80,90,99,95,34,56,34,67,89,91,90];

const above90 = marks.filter((num)=>{
    return num >= 90 ;
});

console.log(above90);

    const num=prompt("enter a number ");
    const newArray = [];
    
    for(let i=1;i<=num;i++)
    {
        newArray.push(i);
    }

    const arr=newArray.reduce((a,b) => {
        return a*b;
    });

    const sum = newArray.reduce((a,b)=>{
        return a+b;
    });
    // console.log(newArray);
    console.log(arr);
    console.log(sum);