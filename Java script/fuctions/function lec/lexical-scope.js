// lexical scope


const myvalue=0;

const lex = () =>
{
    //const myvalue=1;

    function normi() // funtion with lex function
    {
        // const myvalue=2;

        console.log(myvalue);


        const lexical = () => {

            // const myvalue = 3; // what if its not here then it will print 2 not 3 why ? bcz of lexical scope means agar is function  k ander myvalue ya kissi bhi variable ki value na mili to vo us k bhar dunde ga milgya to thik warna undefined 
            
            console.log(myvalue) ; 
            
        }// another function with in normi 

        lexical();
    }


    console.log(myvalue);
    normi( );
    

} 
lex();


// block scope and function scope

// let and const are block scope
// var is function scope

// {
//     // this is block
// }


// {
//     let firstname= "Priyanshu";
// }
// console.log(firstname); can't print bcz let and const are block scoped it will die after the block end same for const

{
    var c="hello";
}
console.log(c);// how its printing , its printing because var is function scoped means ye pure file mai excess hoga chahe ek bana ya do its like global variable 

{
    console.log(c);
}