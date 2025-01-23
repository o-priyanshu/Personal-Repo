#include <stdio.h>
int main()
{
    int i,j,n,m;
    printf("enter how many rows you want to print : ");
    scanf("%d",&n);
   
   
for ( i = 1; i <= n ; i++)
{
    for( j = 1; j<= n*2-1 ;j++)
    {
        if( j >= n+1-i && j <= n-1+i )
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


// #include <stdio.h>
// int main()
// {
//     int i,j,n;
//     // printf("enter how many rows you want to print : ");
//     // scanf("%d",&n);

   
// for ( i = 1; i <=5; i++)
// {
//     for( j = 1; j<= 9 ;j++)
//     {
//         if( j >= 6-i && j <= 4+i )
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