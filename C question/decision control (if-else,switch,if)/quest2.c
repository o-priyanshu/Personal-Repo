#include <stdio.h>
int main()
{
    int n;
    printf("Enter any integer number only : ");
    scanf("%d",&n);

    // if( n % 5 == 0)
    // {
    //     printf("it is divisiable by 5");
    //     return 0;
    // }
    // // else 
    //     printf("it is not divisiable by 5");

    if( n % 5 ) // if its divisible then it will give zero which is false 
    {
        printf("it is not divisiable by 5");
        // return 0;
    }
    else 
    {
        printf("it is divisiable by 5");
    }
    return 0;
}
