/*
*
* Author: Rishabh Madan
* Day 9 Prog 5
* Problem: Typecasting one type of pointer into another
*
*/

#include <stdio.h>

int main(){
    int x = 300;
    int *p;
    char *k;

    p = &x;
    k = (char *)&x; //Storing the address of x by typecasting it explicitly into a character pointer

    printf("%d  %d", *p, *k);

    k++; //Will lead to 1 byte increment as it is a char pointer
    printf("\n%d  %d", *p, *k);

    return 0;
}
