#include <stdio.h>
int main()
{

    int i;
    int a[2][3]=0;

    for (i = 0; i <2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\tPosition : [ %d ] [ %d ] , value : %d\n\n",i,j,a[i][j]);
        }
             
    }

        
    return 0;
}