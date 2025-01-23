/* Print all elements of an array and rever it*/
#include <stdio.h>
int main()
{

    int n, i;

    printf("\tEnter size of an array : ");

    scanf("%d", &n);

     int array[n];

        printf("\tEnter values for %d elements : ", n);

    for (i = 0; i <n; i++)
    {
         scanf("%d",&array[i]);
         printf("\tPOsition : %d , value : %d\n",i,array[i]);
    }

    //reverse
    for (i = 0; i < n; i++)
    {
        
        printf("\nPostion : %d \t Value : %d ",i,array[n-i-1]);
    }

    //  for (i = n-1; i >= 0; i--)
    // {
        
    //     printf("\nPostion : %d \t Value : %d ",i,array[i]);
    // }

        
    return 0;
}