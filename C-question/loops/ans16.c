#include <stdio.h>
int main()
{
    int n,even=0;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(int i = 1; i<=n;i++)
    {
     
            even+=i*2;
    }
            printf("sum of even number : %d\n",even);
    return 0;
}