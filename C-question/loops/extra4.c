//game

// #include <stdio.h>
// int main()
// {
//     int i,n;

//     for(i=1;i<=3;i++)
//     {
//     printf("enter a number : ");
//     scanf("%d",&n);
//     if( n % 2 == 0)
//     {
//         break;
//     }
//     }
//     if (i==4)
//     {
//         printf("game over");
//     }
//     else
//     printf("You win");

//     return 0;
// }

#include <stdio.h>
int main()
{
    int i,n;

    
    for(i=1;i<=3;i++)
    {
    printf("enter a number : ");
    scanf("%d",&n);
    if( n % 2 == 0)
    {
       printf("You win\n");
        break;
    }
    else
    {
        printf("try again\n");
    }
    }

    if (i==4)
    {
        printf("\tgame over");
    }

    return 0;
}
