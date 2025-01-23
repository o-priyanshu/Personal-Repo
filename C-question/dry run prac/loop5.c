#include<stdio.h>
int main()
{
    int x=36,i=2;
 
    while( x>1)
    {
        while (x % i == 0)
        {
            x/=i;
            printf("%d\n",i);
        }
        
        i++;
    }

    return 0;
}