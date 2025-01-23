#include <stdio.h>
int main()
{
    int n;
    printf("Enter any integer number only : ");
    scanf("%d",&n);

    if( n%2 == 0)
    {
        printf("its an even number");
       
    }
    else 
        printf("its an odd number");
   
    return 0;
}
   

    //   if( n%2)
    // {
    //     printf("its an odd number");
    // }
    // else 
    //     printf("its an even number");

    // if( n % 2)
    // {
    //     printf("its an odd number");
    //     return 0;
    // }
    //     printf("its an even number");