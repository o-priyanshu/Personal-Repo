// #include <stdio.h>
// int main()
// {
//     int i,j,count;
//     // count=7;

//     printf("enter how many lines you wants to print : ");
//     scanf("%d",&count);

//     printf("\t\t\t\t\tstar pattern \n");
// for ( i = 1; i <= count ; i++)
// {
//     for( j = 1; j<= 2*i-1 ;j++)
//     {
//         if(  (2*j-1)*count )
//         {
//         printf("*");
//         }
//         else
//         {
//             printf(" ");
//         }
  
//     }
//     printf("\n");
// }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int i,j,count;
    // count=6; 
    printf("enter how many lines you wants to print : ");
    scanf("%d",&count);

    printf("\t\t\t\t\tstar pattern \n");
for ( i = 0; i < count; i++)
{
    for( j = 1; j<= count ;j++)
    {
        if( i )
        {
        printf("*");
        }
        else
        {
            printf(" ");
        }

    }
    printf("\n");
}
    return 0;
}