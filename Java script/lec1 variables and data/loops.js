
let i=0,array=[1,2,3,4,5,6,7,8,9,10];
let ar=["apple","papaya","banana","orange","mango"];
// console.log(array[3]);
// console.log(array[array.length-2]);

// let leng=array.length;

//     array.push("hello");
    
// let sli=array.slice(3,6); // printing elements form 3 index to 6
// console.log(sli);
// console.log(leng);
// console.log(array);

//printing all elements of an array
// for( let i=0;i<array.length-1;i++)
// {
//     console.log(array[i]);
// }


// ar=ar.toUpperCase();// it will only do 1 element in uppercase
// console.log(ar);
// console.log(ar.length); //finding length of an array

//printing value of an array
// for( let i=0;i<ar.length;i++)
// {
//     console.log(ar[i].toUpperCase());
// //     ar=ar[i].toUpperCase(); 
// }


//usimg loops in array printing in upper case using newe array
// let newArray=[];
// for( let i=0;i<ar.length;i++)
// {
//     newArray.push(ar[i].toUpperCase());
// }
// newArray.push("grapes");
// console.log(newArray);

//using of constant to creat array and its better way to creat array 
const constant=[1,2,3,4,5];
// constant.push(10);
// console.log(constant);
    
//     constant.unshift(2);//add elements from 1
//     console.log(constant);

//constant =[2,1,2,3,4,5]//give warning can't use use methods like slice ,trim,shift/unshift,pop/push
//console.log(constant);

// while(i<constant.length)
// {
//     console.log(constant[i]);
//     i++;
// }


// //for of loops its used mostly or normally for also we use for in or while bhut kaam
// used for array,strings etc see in harry js
//will iterate untill the last element used 
let fruits=["apple","papaya","banana","orange","mango"];
 let fruit2=[];

// for( let fruit of fruits)
// {
//     console.log(fruit);
//     console.log(fruit.toUpperCase());
//     fruit2.push(fruit.toUpperCase());
// }

// // console.log(fruit);//give error fruit is only for 
// console.log(fruit2);//storing value in fruit2  


// for in loop // by default it will wile return index of an array
//for in loop gives index or gives key , or elements/value see in harry js
// let ar=["apple","papaya","banana","orange","mango"];
// for(let index in ar)
// {

//     console.log(index);// to print index
//     console.log(ar[index]);//to print the value
//     console.log(ar[index].toUpperCase());//to print the value in UpperCase

// }