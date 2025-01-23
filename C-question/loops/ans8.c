#include <stdio.h>
int main()
{
    int n;

    printf("Enter a nutral number : ");
    scanf("%d",&n);

    if(n<=0)
    {
        printf("Invalid number number > 0");
        return 0;
    }

printf("First %d even natural numbers\n",n);
    for(int i = 1; i<=n;i++)
    {  
            printf("%d\n",i*2);   
    }
    return 0;
}