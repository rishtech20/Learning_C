/*
*
* Author: Rishabh Madan
* Problem: Sum of first n natural numbers using while loop
* Day 4 Program 1
*
*/
#include<stdio.h>

int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = 0, i = 1;

    while(i<=n)
        sum += i++;
        //could also be, sum = sum + i;
        //               i++;

    printf("The sum of first %d natural numbers is %d\n\n\n\n", n, sum);

    return 0;
}
