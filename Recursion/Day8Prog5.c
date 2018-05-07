/*
*
* Author: Rishabh Madan
* Day 8 Prog 5
* Problem: Solving the tower of Hanoi using recursion
*
*/
#include <stdio.h>

void toh(int n, int src, int dest, int aux){

    if (n == 1){ //Base recursion condition
        printf("Move the disc from %d to %d\n",src, dest);
        return;
    }

    toh(n-1, src, aux, dest); //Move the stack to the aux peg
    toh(1, src, dest, aux); //Move the biggest disc to the the dest
    toh(n-1, aux, dest, src); //Move the stack from the aux to dest
}

int main(){
    int n;

    printf("How many discs are there on the source peg?");
    scanf("%d", &n);

    toh(n, 1, 3, 2);
    return 0;
}
