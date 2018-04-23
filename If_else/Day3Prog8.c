/*
*
* Author: Rishabh Madan
* Problem: Is this a leap year?
* Day 3 Program 8
*
*
*/
#include<stdio.h>

int main(){
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    //Using Nested if else
    if (year % 4 == 0){
        if (year % 100 == 0){
            if(year % 400 == 0)
                printf("Nested o/p: It is a leap year");
            else
                printf("Nested o/p: It is a NOT leap year");
        }
        else
           printf("Nested o/p: It is a leap year");
    }
    else
        printf("Nested o/p: It is a NOT leap year");

    //Using single if else statement
    if ((year % 4 == 0 && year % 100 != 0) || (year % 100 == 0 && year % 400 == 0))
        printf("\nSingle if else o/p: It is a leap year");
    else
        printf("\nSingle if else o/p: It is NOT a leap year");

    //Using a conditional operator
    (year%4==0&&year%100!=0)||(year%100==0&&year%400==0)?printf("\nconditional operator o/p: It is a leap year"):printf("\nconditional operator o/p: It is NOT a leap year");

    return 0;
}
