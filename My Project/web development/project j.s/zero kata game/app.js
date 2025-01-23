let boxes= document.querySelectorAll(".box");
let resetB = document.querySelector("#reset");

let turn = false;
const win=[
    [0,1,2],
    [0,3,6],
    [0,4,8],
    [1,4,7],
    [2,5,8],
    [2,4,6],
    [3,4,5],
    [6,7,8]
];





boxes.forEach((box) => 
{    
    box.addEventListener("click",() =>
        {
            if( turn ) 
                {
                    box.innerText = "O";
                    turn = false;
                }
                else    
            { 
                
                
                box.innerText ="X";
                turn = true;
                
            }
            box.disabled = true;
        });
checkwinnner();
    
             resetB.addEventListener( "click", () => {
                    console.log("rest clicked");
                    box.innerText= "";
});
            
const checkwinnner = () =>{

    for(let w of win)
    {
        if(  w === boxes[0,1,2] || w === boxes[[0,3,6] || )
        {
    
        }

    }
}
            // boxes.forEach((box) => {
                
                //     if( turn ) 
                //         {
                //             box.addEventListener("click",() =>
                    //             {
//                 box.innerText = "O";
//                 console.log("box clicked");
//             })
//             turn = false;
//         }
//     else    
//     { 
    //             box.addEventListener("click",()=> 
        //         {
    //             console.log("box clicked");
    //             box.innerText ="X";
    //         });
    //         turn = true;
    //     }
    
    // });
    
    // });
});
//     box.addEventListener( "click", () => {
//         console.log("rest clicked");
//         box.innerText= "5";
//     });