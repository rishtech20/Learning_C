/*
*
* Author: Rishabh Madan
* Day 9 Prog 1
* Problem: Introduction to pointers
*
*/

#include <stdio.h>

int main(){
    int var = 5;
    int *p = &var; // p is an integer variable capable of storing address of only integer variables
    //'&' is called address of operator
    printf("Var = %d\n", var);
    printf("Address of var = %p\n", p);

    *p = 10; //Dereferencing operator '*'

    printf("Var = %d\n", var);
    printf("Address of var = %p\n", p);

    return 0;
}
