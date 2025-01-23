#include <stdio.h>
int main()
{
    int i,j,count,k;
    // count=7;
    printf("enter how many lines you wants to print : ");
    scanf("%d",&count);

    printf("\t\t\t\t\tstar pattern \n");
for ( i = 0; i < count ; i++)
{   
    k=1;  
    for( j = 1; j<= count-i ;j++)
    {
    printf("%d",k++);
  
    }
    printf("\n");
}
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int i,j,count,k;
//     // count=6;
//     printf("enter how many lines you wants to print : ");
//     scanf("%d",&count);

//     printf("\t\t\t\t\tstar pattern \n");
// for ( i = 1; i < count; i++)
// {
//     k=1;
//     for( j = 1; j<= count ;j++)
//     {
//         if(j<= count + 1 -i)
//         {
//         printf("%d",k++);
//         // k++;
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