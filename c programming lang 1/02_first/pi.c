#include<stdio.h>
#include<conio.h>


int addition( int x  , int y)
{
  return x + y;
}
int main()
{
    
    int x , y = 10;
    int sum = addition(x,y);
    printf("the value is %d",sum); 
    getch();
     return 0;

} 