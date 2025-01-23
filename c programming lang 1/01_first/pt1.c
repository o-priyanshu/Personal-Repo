#include<stdio.h>

 void greet()
{
 printf( "Hello");
}

int cube(int v1)
{
    return v1 * v1 * v1 ;
}

void main ()
{
    int result = 0;
    greet ();
    result = cube (5);
}