#include <stdio.h>
#define Pi 3.14
int main()
{
  float r,area;
    
    printf("Enter the value of radius : ");
    scanf("%f",&r);

    area=Pi*r*r;
    printf("area of a circle : %.2f\n",area);
      return 0;
}