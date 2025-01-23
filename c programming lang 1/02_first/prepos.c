#include<stdio.h>
int main()
{
    int a,b;
    a=2,b=3;
    b=a++ + b--;
    a=a-- + ++b;
    b=++a + --b;
    printf("%d,%d",a,b);
    return 0;
}