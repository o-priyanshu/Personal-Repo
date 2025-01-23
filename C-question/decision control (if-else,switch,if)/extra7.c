/*Write a program to print the greatest number btween three number */

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any three numbers  : ");
    scanf("%d%d%d",&a,&b,&c);

// not efficient program
    // if (a<= b && b>=c)
    // {
    //     printf("%d",b);
    // }
    // else if( a<= c && b<=c )
    //     printf("%d",c);
    //     else
    //     printf("%d",a);
   
   //efficient code
    // if (a>b)
    // {
    //     if (a>c)
    //     printf("%d",a);
    //     else
    //     printf("%d",c);
    // }
    // else if( b>c )
    //     printf("%d",b);
    //     else
    //    printf("%d",c );
    

    //using conditional operator
      //(a>b)? (a>c)?printf("%d",a):printf("%d",c):(b>c)?printf("%d",b):printf("%d",c);  
      printf("%d", a>b ? a>c ? a : c : b>c ? b :c );  
    return 0;
}


