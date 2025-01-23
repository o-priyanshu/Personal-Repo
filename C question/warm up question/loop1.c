// write a program to print a series 2,5,10,17,26,37......n

#include<stdio.h>
int main()
{
    int n,sum,i;
    printf("Enter a number : ");
    scanf("%d",&n);

    // sum=1;
    // // n=n*3;
    // for( i = 1; n>=1;i=i+2)
    // {
    //     sum =sum + i;
    //     printf("%d\n",sum);
    //     n--;
    // }

    // another method

    for( i = 1; i<=n;i++)
    {
        // sum =sum + i;
        printf("%d\n",i*i+1);

    }

    return 0;
}