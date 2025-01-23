
#include<stdio.h>
int c=10; // Global variable with initial value 10
int d; // Global varial having a default value Zero ( 0 )

int main() 
{
   int a=5; // Local variable storing a value i.e 5
   int b; // Local variable Having a default value garbage
    
    // printing value of both

    printf("Local Variable  a : %d\n",a);
    printf("Local variable b ( default value ) : %d\n",b);
    printf("Global variable c : %d\n",c);
    printf("Global variable d ( default value ): %d\n",d);
   
    return 0;
}




  
  

