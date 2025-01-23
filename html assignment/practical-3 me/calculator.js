

function cal(){
    const num1 = parseFloat(document.getElementById("num1").value);
    const num2 = parseFloat(document.getElementById("num2").value);
    const operation = document.getElementById("operation").value;

    let result;
    switch(operation)
    {
        case "addition": result = num1+num2 ; break;
        case "subtraction": result = num1-num2 ; break;
        case "multiplication": result = num1*num2 ; break;
        default:
        case "division": result = num1/num2 ; 
    }
    // console.log(result);
    document.getElementById("result").textContent =result;
}