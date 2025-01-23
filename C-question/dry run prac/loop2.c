#include<stdio.h>
int main()
{
    int i=5,j=1;
 
    while( i)
    {
        j=i*j;
        i--;
    }

        printf("%d,%d\n",i,j);
    return 0;
}