/*
    develop a c program to print the values of a given array along with its position in the array.
*/

#include <stdio.h>
int main()
{

    int n, array[30], i;

    printf("\tEnter size of an array : ");

    scanf("%d", &n);

     array[n];

        printf("\tEnter values for %d elements : ", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }

        printf("\tPrinting values of %d elements with there position ", n);

    for (i = 0; i < n; i++)
    {
        
        printf("\nPostion : %d \t Value : %d ",i,array[i]);
    }

        
    return 0;
}