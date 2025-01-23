// let n = +prompt("guess a number");

// console.log(n);

// if( n === 19)
//     {
//         console.log("Gussed right")
//     }
// else if( n>20)
//     {
//         console.log("too high")
//     }
//     else 
//     {
//         console.log("too low")
//     }

// let winningNumber = 19;
// let userGuess = +prompt("guess a number");

// if( winningNumber === userGuess)
//     {
//         console.log("You Guess is right !!")
//     }
//     else if( userGuess < winningNumber)
//         {
//             console.log("too low !!!")
//         }
//         else( userGuess > winningNumber)
//         {
//         console.log("too high !!")
//     }

let days= +prompt("Enter number of days");
switch( days){
    case 0: 
            console.log("Sunday"); 
                break ;
    case 1: 
            console.log("Monday"); 
                break ;
    case 2: 
            console.log("tuesday"); 
                break ;
    case 3: 
            console.log("wednesday"); 
                break ;
    case 4:
             console.log("thursday"); 
                break ;
    case 5: 
            console.log("friday"); 
                break ;
    case 6 : 
            console.log("saturday"); 
                break ;
    default : 
            console.log("invaild"); 
}