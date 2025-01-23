
// Parameter destructuring

// we use it with object 

// const person =
// {
//         name: "Aryan",
//         gender: "Male"

// }

// function details (obj) // passing object in function
// {
    //         console.log(obj.name);
    //         console.log(obj.gender);
    // }
    // details(person);
    

        // Now by using destructuring 
    const person =
    {
            Name: "Aryan",
            gender: "Male"
    
    }
    
function details (obj) // passing object in function
{
        console.log({Name,gender}=obj);
        
}

details(person);