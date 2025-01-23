// create  a  array by using map method and store only first name of array

const array = [

    {firstName : "Priyanshu",age : "18",gender : "Male"},
    {firstName : "Divya",age : "17",gender : "female"},
    {firstName : "kitkat",age : "18",gender : "female"},
    {firstName : "Shino",age : "18",gender : "feMale"},
];


const object = array.map( (array) => {
        return array.firstName;
});

console.log(object);