#include<stdio.h>
int main()
{
    int n,flag;
    printf("Enter a number : ");
    scanf("%d",&n);
 
 if(n<=0)
    {
        printf("Invalid number number > 0");
        return 0;
    }
 if(n==1)
    {
        printf("its a prime number");
        return 0;
    }
    else
    {
        for(int i = 2; i<n;i++)
    {
      if (n % i  == 0 )
      {
         
             flag=0;
      }
      else
      {
            flag=1;
      }
    }
         (flag == 0 ) ? printf("\nis not a prime number :  %d", n):
          printf("\n prime number :  %d", n);

    }
    return 0;
}