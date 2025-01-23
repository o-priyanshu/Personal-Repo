#include <stdio.h>
int main()
{
    int i,count=1;
    printf("First 10 odd natural numbers");

    for( i = 1; count<=10;i+=2)
    { 
             printf("%d odd number\n",i);
             count++;

    }

    return 0;
}