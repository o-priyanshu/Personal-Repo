/* Write a program to read two arrays size of 5  and store sum of these array into third array*/

#include <stdio.h>
int main()
{

       int n;

    printf("\tEnter size of an array : ");
    scanf("%d", &n);  
   int a[n],b[n],c[n];

    printf("\t Enter %d values for First array : ", n);
    
        for (int i = 0; i <n; i++)
            {
                 scanf("%d",&a[i]);
            }
    
    printf("\t Enter %d values for second array : ", n);
        
        for (int i = 0; i <n; i++)
            {
                 scanf("%d",&b[i]);
                 c[i]=a[i] + b[i];
                printf("Position : %d \t sum : %d\n",i,c[i]);  
        
            }
     
       
        
    return 0;
}