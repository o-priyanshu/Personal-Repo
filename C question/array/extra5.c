/*
        create a program in c generate the following output;

        Input : 2345
        Output : Two three four five
*/

#include <stdio.h>

int main() {


    int n,i,x;
    int a[10];

   
    printf("Enter a number: ");
    scanf("%d", &n);


    i=0;

    while ( n>0 ) {
        x = n % 10;     
        a[i] = x;   
        n = n / 10;       
      i++;
    }
    for (int j = i-1; j >=0; j--)
    {
    
        switch (a[j]) {
            case 0: printf("Zero "); break;
            case 1: printf("One "); break;
            case 2: printf("Two "); break;
            case 3: printf("Three "); break;
            case 4: printf("Four "); break;
            case 5: printf("Five "); break;
            case 6: printf("Six "); break;
            case 7: printf("Seven "); break;
            case 8: printf("Eight "); break;
            case 9: printf("Nine "); break;
            default: printf("Invalid data");
        }

    }
    // int num, digit;
    // int digits[10], i = 0;

   
    // printf("Enter a number: ");
    // scanf("%d", &num);

    
    // while (num > 0) {
    //     digit = num % 10;     
    //     digits[i] = digit;   
    //     num = num / 10;       
    //     i++;
    // }

   
    // printf("Output: ");
    // for (int j = i - 1; j >= 0; j--) {
    //     switch (digits[j]) {
    //         case 0: printf("Zero "); break;
    //         case 1: printf("One "); break;
    //         case 2: printf("Two "); break;
    //         case 3: printf("Three "); break;
    //         case 4: printf("Four "); break;
    //         case 5: printf("Five "); break;
    //         case 6: printf("Six "); break;
    //         case 7: printf("Seven "); break;
    //         case 8: printf("Eight "); break;
    //         case 9: printf("Nine "); break;
    //     }
    // }
    // printf("\n");

return 0;
}