#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter a number : ");
    scanf("%d",&n);

    // for(int i = n; i>=1;i--)
    // {
    // printf(" natural numbers in reverse order: %d\n",i);

    // }

    for ( i = 0; i <n ; i++)
    {
        printf("%d\n",n-i);
    }
    
    
    // for( i = 1; i<=10;i++)
    // {
    // printf(" natural numbers : %d\n",11-i);

    // }
    return 0;
}