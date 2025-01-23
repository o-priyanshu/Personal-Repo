 /*
 develop a c program to print the smallest value in a given array along with its position in the array.
*/
#include <stdio.h>
int main()
{
    int arra[30],i,n,small=0,j;

    printf("\t\tEnter a size for finding smallest number : ");
    scanf("%d",&n);

    printf("\t\tEnter any %d numbers : ",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arra[i]);
        small=arra[i];
    }
    for ( i = 0; i <= n; i++)
    {
   
         if (  ! (small<arra[i]) )
         {
             j=i;
             small=arra[i];
        }
    
    }

    printf("\t Position : %d \t Smallest number : %d",j,small);
    

    return 0;
}