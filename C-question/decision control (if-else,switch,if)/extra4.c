/*
    write a program to check whether a given number is divisable by 3 or 7
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any integer number only : ");
    scanf("%d",&n);
    
    // if(n % 3 || n % 7)
    // {
    //     printf("not a divisable of 2 and 3");
    // } 
    // else
    // {
    //     printf(" a divisable of 2 and 3");

    // }


   if(n % 3 == 0 || n % 7 == 0)
    {
        printf("not a divisable of 2 and 3");
    } 
    else
    {
        printf(" a divisable of 2 and 3");

    }
    return 0;
}
