#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);

  if(n<=0)
    {
        printf("Invalid number number > 0");
    }


    for(int i = 1; i<=n;i++)
    {
      sum+=i;   
    }

          printf("\nsum of first %d natural Numbers :  %d",n,sum);
    return 0;
}