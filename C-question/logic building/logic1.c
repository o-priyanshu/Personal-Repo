#include<stdio.h>
int main()
{
    int a,i,x=0,count,lock;
    
    printf("Enter a number : ");
    scanf("%d",&a);
 
    while( a>0 )
    {
        i=a%10;
        x=x*10+i;
        if( i==0 && lock)
        {
            count++;
        }
        else
            lock=0;
        a=a/10;
    }
    while(count--)
    {
        printf("%c",'0');
    }
        printf("%d",x);
   
   
    // while( a>0 )
    // {
    //     i=a%10;
    //     x=x*10+i;
    //     if(x==0)
    //     {
    //         count++;
    //     }
    //     else
    //         lock=0;
    //     a=a/10;
    // }
    // while(count--)
    // {
    //     printf("%c",'0');
    // }
    //     printf("%d",x);
 
    // while( a>0 )
    // {
    //     i=a%10;
    //     x=x*10+i;
    //     a=a/10;
    // }
    //     printf("%d",x);

//   uper wla code ab uskko store karne ka hai reverse order ko store karne ka hai khali print ni karna hota 
    
    // while( a>0 )
    // {
    //     i=a%10;
    //     printf("%d",i);
    //     a=a/10;
    // }
  
    // while( 1 )
    // {
    //     i=a%10;
    //     printf("%d",i);
    //     a=a/10;
    //     if(a==0)
    //     {
    //         break;
    //     }
    // }

    return 0;
}