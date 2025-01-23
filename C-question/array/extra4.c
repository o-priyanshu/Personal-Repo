/*
        create a program in c to convert a decimal number to its equivalent binary number
*/
#include <stdio.h>

int main() {
    int decimal, binary[32], i = 0;

   
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    int originalDecimal = decimal;

 
    while (decimal > 0) {
        binary[i] = decimal % 2; 
        decimal = decimal / 2;  
        i++;
    }

   
    printf("The binary equivalent of %d is: ", originalDecimal);
    for (int j = i - 1; j >= 0; j--) { 
        printf("%d", binary[j]);
    }
    printf("\n");

return 0;
}