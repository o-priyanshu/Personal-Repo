#include<stdio.h>
int main()
{
int i,n;
//clrscr();
printf("Enter a number : ");
scanf("%d",&n);
for(i=1;i>=n;i--)
{
printf("%d\n",i);
}
printf("%d is a factorial of %d",n);
//getch();
return 0;
}
