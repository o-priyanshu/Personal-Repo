#include <stdio.h>
int main()
{
    int n,i;

    printf("Enter a number : ");
    scanf("%d",&n);

    // i=n;
    // while(i<=n)
    // {
    //     printf("%d\n",2*i-1);
    //     i++;
    // }

    i=0;
    while(i<n)
    {
        printf("%d\n",2*i+1);
        i++;
    }


//     if(n<=0)
//     {
//         printf("Invalid number number > 0");
//         return 0;
//     }

// printf("First %d odd natural numbers\n",n);
//     for(int i = 1; i<=n;i++)
//     {  
//             printf("%d\n",i * 2 - 1);   
//     }
    return 0;
}