#include<stdio.h>

// more efficiently not completed yet
// void rotate(int a[],int size , int n)
// {
//     int i=0,j,b[n];
   
    
//     for (  j = size ; j >=0 ; j--,i++)
//      {
//         b[j]=a[i];
//      }

    
//     for (  i = size -2 ; i >= 0; i--)
//         {
        
//             a[i+n]=a[n ];
//         }
        
        
//          for ( i = 0; i < n; i++)
//         {
//             a[i]=b[j];
//         }   
    
// }
    
// void rotate(int a[],int size)
// {
//     int i,sum=a[size-1];
   
//     for ( i = size -2 ; i >= 0; i--)
//         {
//             a[i+1]=a[i];
//         }

//         a[0]=sum;
       
    
// }
//     void n_rotate(int a[], int size , int n)
//     {
//             while( n-- )
//             {
//                 rotate(a,size);
//             }
       
//     }


int main()
{
    int n,size;
    printf("how many times you want to rotate : ");
    scanf("%d",&n);
       
       
    printf("\tEnter size of an array : ");
    scanf("%d", &size);

     int array[size];

        printf("\tEnter values for %d elements : ", size);
    for (int i = 0; i <size; i++)
    {
         scanf("%d",&array[i]);
    }
    
       
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");
    // n_rotate(array,size,n);
    rotate(array,size,n);
       
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",array[i]);
    }
    
   
    return 0;
}
