/*
*
* Author : Rishabh Madan
* Problem : Octal and Hexa initialisation
* Program 2 Day1
*
*/

#include<stdio.h>

int main(){
    // Initializing the variable as integer only
    int var = 45;
    printf("Integer Value: %d\n", var);
    printf("Octal Value: %o\n", var);
    printf("Hexa Value: %x\n", var);

    //Initializing the variable in octal form
    int var1 = 056;
    printf("Integer Value: %d\n", var1);
    printf("Octal Value: %o\n", var1);
    printf("Hexa Value: %x\n", var1);

    //Initializing the value in the Hexa form
    int var2 = 0xa;
    printf("Integer Value: %d\n", var2);
    printf("Octal Value: %o\n", var2);
    printf("Hexa Value: %x\n", var2);

    return 0;
}
