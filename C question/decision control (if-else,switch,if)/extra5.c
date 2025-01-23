/*
    write a program to check whether a given character is an alphabet(upper case) or an alphabet(lower case),a digit or
     a special character
*/
#include <stdio.h>
int main()
{
    char n;
    printf("Enter any integer number only : ");
    scanf("%c",&n);


   if(n >= 'A' &&  n <= 'Z')
    {
        printf("upper case");
    } 
    else if (n >= 'a' && n <= 'z' )
    {
        printf("lower case");

    }
    else if ( n >= '0' && n <= '9' )
    {

        printf("digits");
    }
    else
    {
        printf("special charaters %c \n ASCII : %d ",n,n);

    }
    return 0;
}