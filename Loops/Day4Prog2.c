/*
*
* Author: Rishabh Madan
* Problem: Sum of numbers entered by the user till -ve number is entered
* Day 4 Program 2
*
*/
#include<stdio.h>

int main(){
    int sum = 0, number;

    printf("Enter a number (-ve to terminate): ");
    scanf("%d", &number);

    while (number >= 0){
        sum += number;
        printf("Enter a number (-ve to terminate): ");
        scanf("%d", &number);
    }

    printf("The sum of the numbers entered by the user is %d\n\n\n", sum);

    return 0;
}
