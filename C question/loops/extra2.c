/*
    to print n natrual numbers in reverse
*/
#include <stdio.h>
int main()
{
    int i,n;
    printf("enter a number : ");
    scanf("%d",&n);

    i=0;
    while (i<n)
    {

    printf("%d\n",n-i);
        i++;
    }

    return 0;
}
