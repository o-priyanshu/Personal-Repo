#include<stdio.h>
int main()
{
    int n,product=1;
    printf("Enter a number : ");
    scanf("%d",&n);

  if(n<=0)
    {
        printf("Invalid number number > 0");
        return 0;
    }

    for(int i = 1; i<=n;i++)
    {
      product*=i;   
    }

          printf("\nfactorial :  %d",product );
    return 0;
}