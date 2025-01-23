#include <stdio.h>
int main()
{
  int n,i,var[30],small;

  printf("Enter a size of array : ");
  scanf("%d",&n);
  
  printf("Enter a value for %d elements of an array : ",n);
  
  for ( i = 0; i <10 ; i++)
  {
  scanf("%d",&var[i]);
    
  }
  
  for ( i = 0; i < 10 ; i++)
  {
    if( var[0] < var[i])
{
    small=var[i];
}
    
  }
    printf("Position : %d \n smallest value: %d",i,var[i]);

    return 0;
}
