/* 
    five given boxes , assign a random color and a random 
    background  to each box using DOM concepts
*/


let a = document.getElementsByClassName("box");

a[0].style.backgroundColor ="pink";
a[1].style.backgroundColor ="red";
a[2].style.backgroundColor ="blue";
a[3].style.backgroundColor ="yellow";
a[4].style.backgroundColor ="grey";
// console.log(array);
// .style.backgroundColor = "green"

let rand = Math.random();
if(rand<0.1){

    a[0].style.backgroundColor ="pink";
    a[1].style.backgroundColor ="red";
    a[2].style.backgroundColor ="blue";
    a[3].style.backgroundColor ="yellow";
    a[4].style.backgroundColor ="grey";
}
 rand = Math.random();
if(rand>0.1 ){

    a[1].style.backgroundColor ="pink";
    a[4].style.backgroundColor ="red";
    a[0].style.backgroundColor ="blue";
    a[3].style.backgroundColor ="yellow";
    a[2].style.backgroundColor ="grey";
}
 rand = Math.random();
if(rand<0.01){

    a[4].style.backgroundColor ="pink";
    a[1].style.backgroundColor ="red";
    a[0].style.backgroundColor ="blue";
    a[2].style.backgroundColor ="yellow";
    a[3].style.backgroundColor ="grey";
}

// function random(rand){
   

// }

// console.log(random(100));