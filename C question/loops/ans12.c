#include<stdio.h>
int main()
{
    int n,mul;
    printf("Enter a number to print desired table  : ");
    scanf("%d",&n);


printf("\tTable of %d \n",n);
    for(int i = 1; i<=10;i++)
    {
        if( n <= 0)
        {
            printf("\nNumber should be greater than zero");

        }
        
        
            printf("%5d * %5d = %-5d\n",n,i,i*n);
        
    }

    return 0;
}