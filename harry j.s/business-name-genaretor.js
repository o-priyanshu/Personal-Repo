// create a business name generator by combining list of adjectives and shop name and another word
/*
    Adjectives :
    Crazy 
    Amazing
    Fire

    shop Name :
    Engine
    Foods
    Garments

    ANother Word:
    Bros
    Limited
    Hub 

    eg Amazing food ltd

*/

let random=Math.random();
let first,second,third;

if(random < 0.33)
{
    first = " Crazy ";
}
else if (random >=0.33 && random < 0.66)
{
    first = " Amazing"
}
else 
{
    first = "  Fire"
}

random=Math.random();

if(random < 0.33)
{
    second = " Engine ";
}
else if (random >=0.33 && random < 0.66)
{
    second = "Foods"
}
else 
{
    second = "Garments"
}

random=Math.random();

if(random < 0.33)
{
    third = "Bros ";
}
else if (random >=0.33 && random < 0.66)
{
    third = "  Limited"
}
else 
{
    third = " Hub"
}

console.log(`${first} ${second} ${third}`);


// const ad={
//      '1': 'Crazy',
//      '2':'Amazing',
//      '3':'Fire'
// }

// const sh={
//     '1': 'Engine',
//     '2':'Foods',
//     '3':'Garments'
// }

// const an={
//     '1': 'Bros',
//     '2':'Limited',
//     '3':'Hub'
// }

// let  a=prompt("Enter a random number btw 1 to 3 ");
// let  b=prompt("Enter a random number btw 1 to 3 ");
// let  c=prompt("Enter a random number btw 1 to 3 ");

// if( a === '1' && b === '1' && c === '1')
// {
//     alert(`${ad[1]} ${sh[1]} ${an[1]}`)
// }
// else

// if ( a === '2' && b === '1' && c === '1')
// {
//     alert(`${ad[2]} ${sh[1]} ${an[1]}`)
// }
// else

// if ( a === '3' && b === '1' && c === '1')
// {
//     alert(`${ad[3]} ${sh[1]} ${an[1]}`)
// }
// else

// if( a === '1' && b === '2' && c === '1')
// {
//     alert(`${ad[1]} ${sh[2]} ${an[1]}`)
// }
// else

// if ( a === '1' && b === '3' && c === '1')
// {
//     alert(`${ad[1]} ${sh[3]} ${an[1]}`)
// }
// else

// if ( a === '1' && b === '1' && c === '2')
// {
//     alert(`${ad[3]} ${sh[1]} ${an[2]}`)
// }
// else

// if( a === '1' && b === '1' && c === '3')
// {
//     alert(`${ad[1]} ${sh[1]} ${an[3]}`)
// }
// else

// if ( a === '2' && b === '2' && c === '1')
// {
//     alert(`${ad[2]} ${sh[2]} ${an[1]}`)
// }

// else

// if ( a === '3' && b === '3' && c === '1')
// {
//     alert(`${ad[3]} ${sh[3]} ${an[1]}`)
// }
// else

// if( a === '2' && b === '2' && c === '2')
// {
//     alert(`${ad[2]} ${sh[2]} ${an[2]}`)
// }
// else

// if( a === '3' && b === '3' && c === '3')
// {
//     alert(`${ad[3]} ${sh[3]} ${an[3]}`)
// }

// else

// if( a === '1' && b === '2' && c === '3')
// {
//     alert(`${ad[1]} ${sh[2]} ${an[3]}`)
// }
// else

// if( a === '3' && b === '2' && c === '1')
// {
//     alert(`${ad[3]} ${sh[2]} ${an[1]}`)
// }

