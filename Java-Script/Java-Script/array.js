// array is mutable means changable but you can make it unchangable by using const
let arr=[1,2,3,4,5];

// console.log(arr[0]);
// console.log(typeof arr);

// console.log(arr.length);

// To convert a array into string

// console.log(arr.toString());
//console.log(typeof arr);

//array join means jo double cots k ander dalega vo replace krdega comma ko like

// console.log(arr.join(" or "));
// console.log(arr.join(" and "));
// console.log(arr.join(" + "));

arr.pop();// last element nikal lo  returned poped element maltab nikala hua element in this case it will return 5
//console.log(arr);

arr.push(100);// return updated length of an array
console.log(arr);

arr.push("hello");
//console.log(arr);

arr.shift();//return 1 element bcz suru ka element nikal deta
arr.unshift();// add element from front

// delete arr[2]; // means 2 element ki value ko delete kardo but memory allocation utna hi rahega means length will be same 5 in this case
// in index 2 value will be empty
// console.log(arr);

// concat(); method // concat returns new array doesn't change existing array
// let a=["hwl","hi","hm","hey"];
// let b=[2.0,12.3,5.2,15.2];

// let c=arr.concat(a,b);
// console.log(c);


// sort()
//chutiye ne ni bataya bola advance method hai dekhna padega


//splice() used to add new items to an array , also used to insert or nikalne mai kaam ata hai ek position se\

arr=[1,2,3,4,5,6,7,8,9,10];
// arr=[0,1,2,3,4,5,6,7,8,9,10];

// arr.splice(1,3); // ye index number k hisab se hatata hai like in this example its means is 1 index se 3index k items uda do
// or ye udaye hue elements ko return karega 3 se 7 ye return karega or uda dega 
// console.log(arr);

// arr.splice(1,3,40,45); // adding number by using splice // 1 se 3 index mai pehle number uthayega fhir ye 10 and 45 add karega
// console.log(arr);

let numbers=[1,2,3,4,5]
console.log(numbers);

// let Ne=numbers.slice(1,3);
// console.log(Ne);

// console.log(numbers);// it will be unchanged

// numbers.slice(1,3);
// console.log(numbers); // no change

numbers.reverse();
console.log(numbers); // revrse the items
