#include<stdio.h>
int main()
{
    int n,i;

    printf("Enter a number : ");
    scanf("%d",&n);

  if(n<=0)
    {
        printf("Invalid number number > 0");
        return 0;
    }
    
    printf("First %d even numbers in reverse \n",n);
    for ( i = n ; i >0 ; i--)
    {
        printf("%d\n",2*i);
    }
    return 0;
}