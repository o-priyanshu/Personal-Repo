#include <stdio.h>

int main()
{

    // here we are talking about how much size/value/outputs a data type takes like 32bits , 64bits etc

    // generally, 1 bytes = 8bits and 1 bit = 0 ,1

    // these are the code to check bytes, every operating or device takes its own bytes

    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of char: %zu bytes\n", sizeof(char));

    // run this code (c lang) you will get to know how much value( bytes these three takes ) like int : 4byte , float : 4byte ,char : 1byte
}