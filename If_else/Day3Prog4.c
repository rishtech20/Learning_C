/*
*
* Author: Rishabh Madan
* Problem: Program to find the maximum of three numbers
* Day 3 Program 4
*
*
*/
#include<stdio.h>

int main(){
    int a, b, c, max;

    printf("Enter THREE numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
        max = a;
    else if (b > c)
        max = b;
    else
        max = c;

    printf("Max number is %d", max);

    return 0;
}
