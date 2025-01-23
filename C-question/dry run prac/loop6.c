#include<stdio.h>
int main()
{
    //int x=1,2,3; error
    
    int x;

    x=1,2,3;// it will run
 
    while( x)
    {
            printf("%d\n",x);        
        x--;
    }
  
  
    // int x=(1,2,3);
 
    // while( x)
    // {
    //         printf("%d\n",x);        
    //     x--;
    // }

    return 0;
}