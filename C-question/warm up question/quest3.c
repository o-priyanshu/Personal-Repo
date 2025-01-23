#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter you name : ");
    fgets(name,30,stdin);

    printf("\t%s",name);
    return 0;
}