#include<stdio.h>
int main()
{
    int i,j;
    
    for( i = 1; i<=5;i++)
    {
        for ( j = i + 1 ; j<=4 ; j++)
        {
            printf("%d\n",2*j-1);
        
        }
        

    }

    return 0;
}