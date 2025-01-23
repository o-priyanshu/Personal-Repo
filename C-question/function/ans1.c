#include<stdio.h>

int factorial(int n);
int main()
{
int n,i;
printf("Enter a number : ");
scanf("%d",&n);

i=factorial(n);
printf("%d",i);
return 0;
}

int factorial( int n)
{
    int a;
    if(n==0)
    {
        return 1;
    }

    a=n*factorial(n-1);
    return (a);
}

