/*
    write a program to check whether a number is positive or non-positive
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any integer number only : ");
    scanf("%d",&n);

    // if( n <= 0)
    // {
    //     printf("non positive number\n");
    //     return 0;
    // } 
    //     printf("positvie number\n");

    // printf( n<=0 ? "non positive number" : "positive number");
    // printf( (n<=0) ? "non positive number" : "positive number");
     (n<=0) ?  printf("non positive number") : printf("positive number");
    return 0;
}
