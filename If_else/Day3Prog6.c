/*
*
* Author: Rishabh Madan
* Problem: To calculate and display the tax on the given income
* Day 3 Program 6
*
*
*/
#include<stdio.h>

int main(){
    int income;
    double tax;

    printf("What is your income?? ");
    scanf("%d", &income);

    if (income < 10000)
        tax = 0.0;
    else if (income >= 10000 && income < 20000)
        tax = 0.1 * income;
    else if (income > 20000 && income < 50000)
        tax = 0.2 * income;
    else{
        tax = 0.25 * income;
        tax = tax + 0.1 * tax;
    }

    printf("The payable tax is $ %0.2lf", tax);

    return 0;
}
