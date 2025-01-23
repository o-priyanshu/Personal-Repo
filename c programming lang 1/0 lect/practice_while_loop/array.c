#include<stdio.h>
void main()
{
    int i=0,sum,average,age[5];
    while(i<5){
    printf("Enter your age : \n");
     scanf("%d",&age[i]);
     printf("your age %d\n",age[i]);
     sum=sum+age[i];
     printf("sum=%d\n",sum);
     i++;
    }
    printf("average=%d",average=sum/10);
    
}