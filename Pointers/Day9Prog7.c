/*
*
* Author: Rishabh Madan
* Day 9 Prog 7
* Problem: Finding the max of 3 numbers and finding their sum
*
*/

#include <stdio.h>

void do_It(int x, int y, int z, int *sum, int *maxnum){

    *sum = x+y+z;

    (x > y && x > z)? (*maxnum = x):((y > x && y > z)? (*maxnum = y):(*maxnum = z));
}

int main(){

    int a, b, c, sum, max;

    printf("Enter three numbers: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    do_It(a,b,c,&sum, &max);

    printf("Sum = %d and Max = %d", sum, max);

    return 0;
}
