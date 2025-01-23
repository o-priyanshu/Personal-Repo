#include<stdio.h>
int rev(int n)
{
       
    if (n>0)
    {
        printf("%d\n",n);
        rev(n-1);
    }
}
// int rev(int n)
// {
       
//     if (n>0)
//     {
//         rev(n-1);
//         printf("%d\n",n);
//     }
    
// }

  

int main()
{
    int n,c;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    c=rev(n);
       
   
    return 0;
}
