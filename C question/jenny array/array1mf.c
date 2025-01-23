/* Write a program to read an array of 10 integers and count total no of even and odd*/

#include <stdio.h>
void integers(int n) // formal arguments copying the value of n and have its own memory allocation means change in formal arguments
                        // doesn't change the value of actual arguments 
{
     int even=0,odd=0,a[n];

        printf("\t values for %d elements : ", n);
        for (int i = 0; i <n; i++)
    {
         scanf("%d",&a[i]);
        ( a[i] % 2 == 0 ) ? even++ : odd++ ;
    }
    printf("Total even numbers : %d \t Total odd numbers : %d",even,odd);
     
}
int main()
{

       int n;

    printf("\tEnter a number : ");
    scanf("%d", &n);  
    integers(n);  //actual arguments or can say call by value
        
    return 0;
}

// normal way
// int main()
// {

//        int n;

//     printf("\tEnter a number : ");
//     scanf("%d", &n);  
  
//      int even=0,odd=0,a[n];

//         printf("\t values for %d elements : ", n);
//         for (int i = 0; i <n; i++)
//     {
//          scanf("%d",&a[i]);
//         ( a[i] % 2 == 0 ) ? even++ : odd++ ;
//     }
//     printf("Total even numbers : %d \t Total odd numbers : %d",even,odd);
        
//     return 0;
// }