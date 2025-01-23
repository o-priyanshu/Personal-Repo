#include <stdio.h>
int main()
{
    int n,odd=0;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(int i = 1; i<=n;i++)
    {
     
            odd+=i*2 - 1;
     }
            printf("sum of odd number : %d\n",odd);
    return 0;
}