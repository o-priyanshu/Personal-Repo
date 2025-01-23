#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter any  two integer numbers : ");
    scanf("%d%d",&n,&m);

    if( n<m )
    {
        printf("%d is largest\n",m);
    }
    else 
        printf("%d is largest\n",n);

        // (n<m)?printf("%d is largest",m):printf("%d is largest",n);
    return 0;
}
