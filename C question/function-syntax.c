
#include<stdio.h> 

int cube();// declaration of user-defined function having a unique name cube

int main() // main function 
{                               // block of main function stars
    const   int a=10; 
    
    printf("Value of a : %d\n",a); 

    cube(); // function call ( calling statement for function cube )
    return 0;
}                               // End of block ( main function )


int cube()  // Definition of user-definef function cube 
{
    printf("\nhello");        // block of statments/code
    
    return 0; 
}
