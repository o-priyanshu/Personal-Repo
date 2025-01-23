#include <stdio.h>
int main()
{
    char n[30];
    printf("Enter your name : ");
    fgets(n,30,stdin);

    for(int i = 0; i<5;i++)
    {
    printf("%s\n",n);

    }
    return 0;
}