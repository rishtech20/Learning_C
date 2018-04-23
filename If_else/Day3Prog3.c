/*
*
* Author: Rishabh Madan
* Problem: Program to find the maximum of two numbers
* Day 3 Program 3
*
*
*/
#include<stdio.h>

int main(){
    int a, b, max;

    printf("Enter TWO numbers: ");
    scanf("%d %d", &a, &b);

    if(a > b)
        max = a;
    else
        max = b;
    printf("The maximum of two numbers is %d", max);

    return 0;
}
