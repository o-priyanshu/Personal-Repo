#include<stdio.h>

//input function calls 
int main()
{
   
    //here we are going to see sum of variables or how input output works together

    int a , b;
    printf("enter a");
    scanf("%d", &a);

  
    printf("enter b");
    scanf("%d", &b);
    

    // int sum= a + b;
    // printf( "the sum : %d" , sum);

    //second trick, dirct keh skte , the output will be same 

    printf( "the sum : %d" , a + b);
    return 0;

}