#include <stdio.h>
int main()
{
    int x,y,i,result=1;
    printf("Enter a number: ");
    scanf("%d",&x);

    printf("Enter its power respectively : ");
    scanf("%d",&y);

        if(x == 0)
        {
            printf("Invaild number ( x > 0 )");
            return 0;
        }
        if(y== 0)
        {
            printf("1");
            return 0;
        }

    for( i = 1; i<=y;i++)
    {
         result *=x;
    }
    printf("power : %d",result);
    return 0;
}