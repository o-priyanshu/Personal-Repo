#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);

    // for(int i = 1; i<=n*2;sum+=i,i+=2);
    //       printf("\nsum of first %d odd Numbers :  %d",n,sum);
   
    for(int i = 1; i<=2*n;i++)
    {
        if(i&1)
        {
            sum+=i;
        
        }
    }
          printf("\nsum of first %d odd Numbers :  %d",n,sum);

    return 0;
}