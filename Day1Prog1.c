/*
*
* Author: Rishabh Madan
* Problem: Program to test the input and output in C
* Program 1 Day 1
*
*/
#include<stdio.h>

int main(){
    int aVar;
    printf("Enter a value: ");
    scanf("%d", &aVar);
    /* The %d is a format specifier used to tell scanf() that it should expect a signed integer from the OS
    *  &aVar is used because the variable has the localized scope withing main() and when scanf() is called from
    * <stdio.h> is sends the address of the variable so the value is easily accessed.
    */
    printf("The entered value is: %d\n", aVar);
    // in above statement the %d format specifier acts as a place holder.

    return 0;
}
