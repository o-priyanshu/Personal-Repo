#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    clrscr();
    printf("Enter the value the value of a :  ");
    scanf("%d",&a);
    prinft("The value of acand b: %d,%d\n\n",a);

    if (a/2==0)
    {
        printf("The value of a: %d\n",a);
    }
    else
    {
        printf("The number is not divisable by 2\n");
    }

    getch();
    return 0;   

}