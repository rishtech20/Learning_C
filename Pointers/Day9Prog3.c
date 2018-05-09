/*
*
* Author: Rishabh Madan
* Day 9 Prog 3
* Problem: Size of a pointer variable on a 64 bit or 32 bit architecture and OS
*
*/

#include <stdio.h>

int main(){
    int *p;
    float *f;
    double *d;
    char *k;

    printf("%lu %lu %lu %lu\n", sizeof(p), sizeof(f), sizeof(d), sizeof(k));

    printf("%lu %lu %lu %lu\n", sizeof(*p), sizeof(*f), sizeof(*d), sizeof(*k));

    return 0;
}
