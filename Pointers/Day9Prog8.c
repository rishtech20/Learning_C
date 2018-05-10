/*
*
* Author: Rishabh Madan
* Day 9 Prog 8
* Problem: Relationship between 1D array and pointers
*
*/

#include <stdio.h>

int main(){
    int x[] = {10, 20, 30, 40, 50};

    //The name of the array is a pointer which stores the base address of the array
    printf("%p, %p\n", x, &x[0]);

    //Following loop shows the three different ways we can access and manipulate the content of the
    //array with or without using the subscription operator
    for (int i = 0; i < 5; i++){
        printf("%d, %d, %d\n", x[i], *(x+i), i[x]);
    }

    return 0;
}
