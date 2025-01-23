// pointers are special characters which contains address of other varialbes

#include<stdio.h>
int main() {

    int a=10;
   
    int *p,*q,*c; 
   
    float b=1.5,*r;
    
    // p=&b; // give warning for typecasting
    
    // r=&b;
    
    // q=b;
    
    // q=(int)b;
    
    // c=a;

    // printf("q : %d \t c : %d\n",q,c); // q and c taking value of a and b

    // printf("p : %d \t r : %d \n",p,r); // p and q taking value of a and b

    p=a;
    printf("p : %d \t r : %d \n",*p); 
 
 
    return 0;
}