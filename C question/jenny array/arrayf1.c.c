/* Write a program to read marks of 5 students and calculate sum and avg using array*/

#include <stdio.h>
int students(int n)
{
     int sum=0,array[n];

        printf("\t values for %d elements : ", n);
        for (int i = 0; i <n; i++)
    {
         scanf("%d",&array[i]);
            sum+=array[i];
    }
      return (sum);
}
int main()
{

       int n, i;
       float avg;

    printf("\tEnter size of an array : ");
    scanf("%d", &n);

    avg=students(n);
    
    
    avg=avg/n;
        
        printf("\naverage : %.2f ",avg);
    
        
    return 0;
}