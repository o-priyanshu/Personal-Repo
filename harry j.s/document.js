document.getElementsByTagName("div");

document.getElementsByClassName("box");

document.getElementsByName(""); //by name of attribute



let box=document.getElementsByClassName("box");
console.log(box);

box[2].style.backgroundColor = "blue";
box[4].style.backgroundColor = "blue";

document.getElementById("red").style.backgroundColor = "red";

//We are use .box in query because they are class if they are id we will use #

// document.querySelector(".red").style.backgroundColor = "green"
document.querySelector("#red").style.backgroundColor = "green" // ye shirf pehle wle ko target karega jo isko pehle mile gya vo change(.box)


document.querySelectorAll(".box")//it will select all having class name box and it will return a nodelist means a array or a string of 
// elements 

// when you are using querySelectorAll you have to use loops to select them becaue we use loops for array and strings
// now we will use it

document.querySelectorAll(".box").forEach(element => {
    
    // console.log(element.style.backgroundColor = "pink");
    element.style.backgroundColor = "pink";
});

//NOTE : you can use any loop for this

for(let i = 0 ;i<document.querySelectorAll(".box").length;i++)
{
    document.querySelectorAll(".box")[i].style.backgroundColor = "brown";
}


// now we can target a tag also by using

document.getElementsByTagName("div"); // jitne bhi div hai sab ajyga // return HTML collection

// document.getElementsByName("div");

// MAtches ,closest and Contains methods

// three important methods to search DOM

// elem.matches(css) , Used to check if the element matches  te given css selector

e=document.getElementsByTagName("div");

e[4].matches("#red");// run this both in dev tool
e[2].matches("#red");

// elem.closest for nearest or closest parent/element

e[4].matches("#red");// run this both in dev tool
e[2].matches("#red");
e[4].closest("container");
e[3].closest("container"); // return null if not 
e[1].closest("div");
e[2].closest("body");


//elem.contain agar element a , element b k ander hua to true warna false 

document.querySelector(".container").contains(e[2]);