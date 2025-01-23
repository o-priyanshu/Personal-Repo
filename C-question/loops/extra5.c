/*
printing table frome 1 to 10 table
*/

#include <stdio.h>
int main()
{
    int i,j;

    printf("\t\t\t\t\tTable chart \n");
for ( i = 1; i <= 10 ; i++)
{
    for(int j = 1; j<=10;j++)
    {
    printf("\t%-3d",i*j);

    }
    printf("\n");
}
    return 0;
}