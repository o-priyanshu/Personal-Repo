#include<stdio.h>
int isprime(int n)
{
    int i,j;
    for ( i = 1; i <=n; i++)
        if(n % i==0)
        return 0;
        return 1;
    
}
int prime(int n)
{
        while( !isprime(++n) );
    
        printf("%d\n",n);
        return n;   
}


int main()
{
    int n,c;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    c=prime(n);
       
    printf("%d\n",c);
   
    return 0;
}
