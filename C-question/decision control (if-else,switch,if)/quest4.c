#include <stdio.h>
int main()
{
    int n,m,p;
    printf("Enter any  three integer numbers : ");
    scanf("%d%d%d",&n,&m,&p);

    if( n<m && m>p)
    {
        printf("%d is largest\n",m);
    }
    else if(n>m && n>p)
    {

        printf("%d is largest\n",n);
    }
    else 
    {
    printf("%d is largest\n",p);

    }


    //    (n<m && m>p )?printf("%d is largest",m):(n>m && n>p )? printf("%d is largest",n):printf("%d is largest",p);
    return 0;
}