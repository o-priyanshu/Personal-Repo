// destructuring in object

console.log("hello");
// const band ={

//     bandName : "led zeppelin",
//     famousSongs : "stairway to heaven"
 
// }

// const bandName = band["bandName"]; //same hai niche wle ki trha output same
// const bandName = band.bandName;
// console.log(bandName);

// short cut for doing this i.e destructuring in object

// const band ={

//     bandName : "led zeppelin",
//     famousSongs : "stairway to heaven",
//     year : "1934",
//     anotherFamousSong : "kashmir"
// }


// const {bandName,famousSongs}=band;
// console.log(bandName,famousSongs);

// const {a,b}=band;
// console.log(a,b); // idk why but its not give the output like previous one I think its because it need keyname

// so  over come this problem we will us eit like

// syntax is first wirte key name then : then wirte variable name abki sab same as array
// const {bandName:a,famousSongs:b}=band; 
// console.log(a,b);

//spreading it 

const band ={

    bandName : "led zeppelin",
    famousSongs : "stairway to heaven",
    year : "1934",
    anotherFamousSong : "kashmir"
}

// const {bandName , famousSongs, ...restelements}=band;
// console.log(restelements); // it store year and anotherFamousSong

const {year:a1}=band;
console.log(a1); // it store year
