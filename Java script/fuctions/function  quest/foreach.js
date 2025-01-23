// create a foreach loop and multiply every number with 2 

const sq = [1,2,3,4,5,6,7,8,9,10];


sq.forEach( function(square,index) // first argument is value then index
{   
    console.log(`\nindex ${index}`)
    console.log(`${square*2}`);
})