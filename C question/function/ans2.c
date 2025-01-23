#include<stdio.h>
#define Pi 3.14

float area(float n);

int main()
{
float n,i;
printf("radius of a circle : ");
scanf("%f",&n);

i=area(n);
printf("%.2f",i);
return 0;
}

float area( float n)
{
     float a;
     a=Pi * n * n;
    
    return a;
}

