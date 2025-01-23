#include<stdio.h>
int main()
{
    int length = 11;
    float breadth = 2.5;
     float area = length * breadth ;
    printf("Area of rectangle : %f \n" , area );



    int l = 12;
    float b = 3.5;
    float perimeter = 2 * (l + b) ;
    printf("perimeter of rectangle : %f\n", perimeter);


    // area of cirle
    int r = 4;
    float pi = 3.14;
    float Area = r * r * pi ;
    printf("Area of a circle : %f\n" , Area);


    int x,y,z,o;
    float j,sum,product;
    x = 10;
     y = 20;
     z = 90;
     o = 70;
     j = 3.4;
    sum = x + y+z+o+j;
    printf("sum :%f\n" , sum);
    product=x*y*z*o*j;
    printf("value of product : %f\n", product );



    //average
  /*
   int hi,helo,hemlo,hey,average;
    hi = 10;
     helo = 2;
     hemlo = 3;
     hey = 4;
    average = hi+helo+hemlo+hey;
    printf("value is %f\n",average) ;
  */

    /*
  int hello , hemlo  , average , hey , hi ;
    hello = 10 , hemlo = 2 , hey = 3 , hi = 4 ;
    average = (hello + hemlo + hey + hi) / 4 ;
    printf("value of average : %f\n", average);
    */
 int po , pn, pm, pv , average;
 po =10;
  pv = 2;
  pn = 3;
  pm = 4; 
 average = (po + pv + pn + pm)/ 2 ;
 printf("The value %f",average);

    return 0;
}
