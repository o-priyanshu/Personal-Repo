let age=22;
console.log("hello");
console.log(typeof 22);
console.log(typeof (age + ""));

let firstName="piyush";
console.log(firstName); 

console.log(firstName.length);

let ki=firstName.toUpperCase(); //can store in new var
console.log(ki);

firstName=firstName.toLowerCase();
console.log(firstName);  // can re-update the value in same var 


firstName="      Piyush      ";
console.log(firstName.length); // output 18 includes/count space also

firstName=firstName.trim(); // output 6 space trim
console.log(firstName.length);

console.log(typeof age,typeof firstName);

console.log(typeof age, firstName); //type with output


age="haRshit"
console.log(age[5]);//index number 3 output 'i'

age="     Pogo   ";
console.log(age[5]);//index number 5 output 'P'

age="hero hello"
console.log(age.length); //total length 6

console.log(age[age.length-1]); // get last letter of string 
console.log(age.length-1); // get last last digit/index no

console.log(age[9]);//check is index no correct or not;

let hero="24";

hero=String(hero);
console.log(typeof hero);

age="hero hello"
age=Number(age);
console.log(typeof age);

let a="20";
let b="20";
let ab=a + b;
console.log(ab);

 ab=+a + +b;
console.log(ab);

let name1="piyush";
let age1="18";

let aboutMe="my name is " +  name1 + " " + "and my age is" + " " +age1;
console.log(aboutMe);

 aboutMe=`my name is ${name1 }and my age is ${age1}` ; //template string 
console.log(aboutMe);