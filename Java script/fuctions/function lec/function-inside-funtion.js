// funtions inside functions

const myfunction = () =>
{
    const hello = () =>
    {
        console.log("hello world");
    }

    const add = (a,b) => a+b;

    const mul = (a,b) =>{
        return a*b;
    }

    console.log("Nimoda nimoda");
    hello(); // ye functuion tabhi call hogi jab myfunction ko cqall kiya jyga

    // add(2,5); // abhi kuch ni karega bss khali return karega but print ni karega 

    console.log(add(2,5));//karwaliya print
    console.log(mul(2,5));//karwaliya print
}
myfunction();