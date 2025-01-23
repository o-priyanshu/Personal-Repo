#include <stdio.h>
int main()
{

    int i,j,n,m,sum=0,col=0;

    
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

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
        
            sum=sum+a[i][j];
        }
        
        printf("\tRow : %d\n",sum);
        sum=0;
    
    }

    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
        
           col=col+a[j][i]; 
        }
        
        printf("\t Column : %d \n",col);
        col=0;
    
    }

    // for ( i = 0; i < n; i++)
    // {
    //     for ( j = 0; j < m; j++)
    //     {
        
    //         sum=sum+a[i][j];
    //         col=col+a[j][i]; 
    //     }
        
    //     printf("Row : %d \t Column : %d \n",sum,col);
    //     col=sum=0;
    
    // }
    return 0;
}