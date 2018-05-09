/*
*
* Author: Rishabh Madan
* Day 9 Prog 4
* Problem: Address Arithmetic
*
*/

#include <stdio.h>

int main(){
    int x = 100;
    int *p;
    p = &x;

    printf("x = %d\n", x);
    printf("p = %lu\n", p);

    p++; //Incrementing p by 1 will increment it by 4 actually because that is the size of an integer
    //p++ ==> p + 1*4 = p + 4
    printf("p++ = %lu\n", p);

    double *q = (double *)10000; //Explicit typecasting to store address 10000 in the double pointer
    double *o = (double *)2000;

    /*A double variable is of size 8 bytes and when we declare a double pointer it automatically
    reserves 8 bytes from the address it stores. So, when address location 2000 is subtracted from
    10000, we are essentially trying to know the number of double values between these two locations.
    Therefor, 10000 - 2000 = 8000/8 = 1000, double memory locations between these two memory addresses.*/
    printf("q - o = %lu\n", q - o);

    return 0;
}
