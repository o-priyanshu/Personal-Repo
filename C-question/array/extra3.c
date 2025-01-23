// Create a program in c to sort the given array elements in ascending order

// #include <stdio.h>
// int main()
// {
//     int n, i,j=0,m=0,sort[30],small;

//     printf("\t\t\tEnter a size for sorting : ");
//     scanf("%d", &n);

//     printf("\t\t\tEnter any %d numbers to be in Ascending orders : ", n);
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &sort[i]);
//         small=sort[0];
//         sort[m]=sort[i];
//     }
     
//     for ( i = 0; i < n; i++)
//     {
//         for ( j =n ; j> 0 ; j++)
//         {
//                     m=i;
//                 if( sort[i]>sort[m])
//                 {
//                      small=sort[i];
//                 }
//             m++;
//         }

//     sort[i]=small;
//     j=j-1;  
    
//     }
//                 for(i=0; i<n ; i++)
//                 {       
//                     printf("\t\tOriginal Order : %d\n",sort[j]);
//                 }
//                 for(i=0; i<n ; i++)
//                 {       
//                     printf("\t\tAscending Order : %d\n",sort[i]);
//                 }

//     return 0;
// }

#include <stdio.h>

int main() {
    int n, i, j, temp;
    int sort[30];

    
    printf("\t\tEnter the size of the array: ");
    scanf("%d", &n);

    
    printf("\t\tEnter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &sort[i]);
    }

    
    for (i = 0; i < n - 1; i++)
     {
        for (j = 0; j < n - i - 1; j++) 
        {
            if (sort[j] > sort[j + 1])
             {
                
                temp = sort[j];
                sort[j] = sort[j + 1];
                sort[j + 1] = temp;
            }
        }
    }

    
    printf("\t\tArray in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", sort[i]);
    }
    printf("\n");

return 0;
}