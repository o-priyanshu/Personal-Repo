
#include<stdio.h>
int main()
{
    int n,i,j=0,sum;
              
    printf("\tEnter size of an array : ");
    scanf("%d", &n);

     int array[n];

    printf("\tEnter values for %d elements : ", n);
    for ( i = 0; i <n; i++ , j++)
    {
         scanf("%d",&array[i]);
         sum=array[n-1];
    }
    
    printf("\t\tOriginal\n");
      for (i = 0; i < n; i++)
    {
        printf("\t%d",array[i]);
    }

     printf("\n");

    for ( i = n-1,j=i-1; i >= 0 ;i--,j--)
    {
        if (sum>array[j]) 
        {
            sum=array[i];
            array[i]=array[j];  
            array[j]=sum; 
        }
    }  

    printf("\t\tsorted\n");
    for ( j = 0; j < n; j++)
    {
        printf("\t%d",array[j]);
    }
    
    printf("\t\tsorted\n");
    for ( i = 0; i < n; i++)
    {
        printf("\t%d",array[i]);
    }
    
       
    return 0;
}
