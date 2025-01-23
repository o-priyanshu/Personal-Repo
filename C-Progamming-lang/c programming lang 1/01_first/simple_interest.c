#include<stdio.h>
int main()
{
   float principle = 1443.2;
   int time = 3 ;
   float interest = 2.5;
   float amount = principle * time * interest/100 ;
   printf("The value is %f", amount );
    return 0;
}