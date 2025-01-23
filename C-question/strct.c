// Documentation section (optional)

/*  
    calculating area of circle
*/
#include<stdio.h> // Linking Section ( header files)

#define CONST 3.14 // Definition Section/Symbolic constants ( optional )

int c; // Global variable declaration Section ( optional )
int cube();

int main() // Function Section ( Compulsory/ at least one function )
{
    const   int a=10; // declaration part
    
    printf("Value of a : %d\n",a); // Executable part

    printf("The value of CONST is %.2f", CONST);
    c=cube();
    return 0;
}
// Sub program Function ( User Defined Funtions )

int cube()
{
    printf("\nhello");
    return 0;
}
