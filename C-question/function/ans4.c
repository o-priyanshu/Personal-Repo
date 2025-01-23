#include<stdio.h>

//Takes nothing return nothing

// void TNRN();
// int main()
// {

// TNRN();
// return 0;
// }

//  void TNRN( )
// {
//     int n,i,sum=0;
//     printf("Enter a number : ");
//     scanf("%d",&n);

//     for ( i = 1; i <=n ; i++)
//     {
//         sum+=i;
//     }
    

//     printf("%d",sum);
// }

//takes something returns something


// int TSRS(int n);
// int main()
// {
//     int n,a,sum;
//     printf("Enter a number : ");
//     scanf("%d",&n);

//     a=TSRS(n);

// printf("%d",a);
// return 0;
// }

//  int TSRS(int n)
// {
//     int sum=0,i;
//     for ( i = 1; i <=n ; i++)
//     {
//         sum+=i;
//     }    
//     return (sum);

// }

//takes somthing returns nothing

// void TSRN(int n);
// int main()
// {
//     int n,a;
//     printf("Enter a number : ");
//     scanf("%d",&n);

//     TSRN(n);

// return 0;
// }

//  void TSRN(int n)
// {
//     int sum=0,i;
//     for ( i = 1; i <=n ; i++)
//     {
//         sum+=i;
//     }    
 
// printf("%d",sum);

// }

//takes nothing returns something

int TNRS();
int main()
{
    int a,b;
    a=TNRS();
printf("%d",a);

return 0;
}

 int TNRS()
{
    int sum=0,i;
    int n,a;
    printf("Enter a number : ");
    scanf("%d",&n);

    for ( i = 1; i <=n ; i++)
    {
        sum+=i;
    }    
 
    return sum;
}