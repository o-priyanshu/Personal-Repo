#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,s,flag=0;

   printf("Enter a number : ");
    scanf("%d",&n);
     s=sqrt(n);




    // for ( i = 2; i <=s; i++)
    //     if(n%i==0)
    //     {
    //         break;
    //     }
    //     if(i == s+1)
    //         printf("prime number" );
    //     else
    //     {
    //     printf("not a prime number");
    //     }


    // for ( i = 2; i <=n/2; i++)   //is not a prime number when its a prime number means not a good program
    //     if(n%i==0)
    //     {
    //         break;
    //     }
    //     if(i == n/2+1)
    //         printf("prime number" );
    //     else
    //     {
    //     printf("not a prime number");
    //     }
     

    // for ( i = 2; i <=n; i++) //is not a prime number when its a prime number means not a good program
    //     if(n%i==0)
    //     {
    //         break;
    //     }
    //     if(i == n)
    //         printf("prime number" );
    //     else
    //     {
    //     printf("not a prime number");
    //     }
      
// printing problem not effiecent if we solve it
 
    // for (int i = 2; i <=s; i++)
    //     if(n%i==0)
    //      if( !(n%i) )
    //     {
    //         flag=1;
    //        break;    
    //     }
    //     if(flag)
    //    {
    //        printf("not a prime number");
    //    }else
    //        printf("a prime number");

    


// printing problem not effiecent if we solve it
 
    // for (int i = 2; i <=n; i++)
    // {
    //     if(n%i)
    //     {
    //         printf("prime number" );
    //     }
    //     else
    //    {
    //     printf("not a prime number");
    //    break;
    //   }

    // }
   
   
    
    return 0;
}