/*
*
* Author: Rishabh Madan
* Day 9 Prog 2
* Problem: Ilustration of pointer to a pointer
*
*/

#include <stdio.h>

int main(){
    int x = 100;
    int *p = &x; //p is a pointer which stores the address of the variable x

    printf("x = %d\n", x);
    printf("p = %p\n", p);

    int **k = &p; //k is the pointer to pointer int which can be dereferenced to give the value of x

    printf("**k = %d", **k);

    return 0;
}
