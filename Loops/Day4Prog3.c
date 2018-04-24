/*
*
* Author: Rishabh Madan
* Problem: Sum of n natural numbers using for loop
* Day 4 Program 3
*
*/
#include<stdio.h>

int main(){
    int n, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(sum = 0; n != 0; sum += n--);

    printf("The sum given n natural numbers is %d", sum);

    return 0;
}
