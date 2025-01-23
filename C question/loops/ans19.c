#include<stdio.h>
int main()
{
    int n,j,f=1,fac;
    printf("Enter a number : ");
    scanf("%d",&n);
 
 if(n<=0)
    {
        printf("Invalid number number > 0");
    }
        for ( j = 1; j<=n+1 ; j++)
        {
            fac=f;
            f=fac*j;
        }
          printf("\nfactorial :  %d", fac);
     
    

    return 0;
}