#include <stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,x,i;
    printf("Enter any cofficient of x square ,x and constant term (respectively) : ");
    scanf("%f%f%f",&a,&b,&c);

    d=(b*b)-4*(a*c);

    if (d>0)
    {
        x= (-b+sqrt(d))/(2*a);
        i= (-b-sqrt(d))/(2*a);
         
         printf("%.2f , %.2f\n",x,i);
    }
    
   else if(d==0)
    {
        x= -b/(2*a);
      printf("hello %.2f\n",x);
    }
    else
    {
         
        i= -b/(2*a);
        i= sqrt(-d)/(2*a);     
         printf("%.2f\n",x+i);
         printf("hi  %.2f\n",x-i);
    }
    return 0;
}