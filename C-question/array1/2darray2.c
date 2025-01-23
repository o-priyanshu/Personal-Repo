//matrix and its sum

// #include <stdio.h>
// int main()
// {

//     int i,j,n,m,sum=0;

    
//     printf("\tEnter values for rows and column : ");
//     scanf("%d%d",&n,&m);
    
//     int a[n][m];
    
//     for (i = 0; i <n; i++)
//     {
//         printf("Enter %d values for columns ",m);
//         for ( j = 0; j < m; j++)
//         {
//          scanf("%d",&a[i][j]);
//          sum+=a[i][j]; 
//         }
//     }

//     for (i = 0; i <n; i++)
//     {
//         for ( j = 0; j < m; j++)
//         {
//             printf("\t%d",a[i][j]);
//         }
//              printf("\n");
//     }

//         printf("sum= %d",sum);
//     return 0;
// }

//transpose
#include <stdio.h>
int main()
{

    int i,j,n,m;

    
    printf("\tEnter values for rows and column : ");
    scanf("%d%d",&n,&m);
    
    int a[n][m];
    
    for (i = 0; i <n; i++)
    {
        printf("Enter %d values for columns ",m);
        for ( j = 0; j < m; j++)
        {
         scanf("%d",&a[i][j]);
     
        }
    }

    printf("\t\n\nOriginal Matrix\n\n");
    for (i = 0; i <n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            printf("\t%d",a[i][j]);
        }
             printf("\n");
    }
                                                    // 2*3 now 3*2 means n*m now m*n  // n row, m column
    printf("\t\t\n\nTranspose Matrix\n\n");
   
    // for (i = 0; i <m*2; i++)      //   bekar h ye wla galat
    // {
    //     for ( j = 0; j < 1; j++)
    //     {
    //         printf("\t%d",a[j][i]);
    //     }
    //         //  printf("\n");
    // }
  
    // for (i = 0; i <m; i++)
    // {
    //     for ( j = 0; j < n; j++)
    //     {
    //         printf("\t%d",a[j][i]);
    //     }
    //          printf("\n");
    // }
  
    // printf("\t\t\n\nTranspose Matrix\n\n");
    // for (j = 0; j <m; j++)
    // {
    //     for ( i = 0; i < n; i++)
    //     {
    //         printf("\t%d",a[i][j]);
    //     }
    //          printf("\n");
    // }

     
    return 0;
}