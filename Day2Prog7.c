/*
*
* Author - Rishabh Madan
* Problem - Can you join the Workforce? : Logical OR operator
* Day 2 Program 7
*
*/
#include<stdio.h>

int main(){
    int age;

    printf("How old are you??? ");
    scanf("%d", &age);

    short int canJoin = (age <= 14 || age >= 60);

    if(canJoin == 1)
        printf("You are not allowed to work!!!");
    else
        printf("You are allowed to join the workforce!!");

    return 0;
}
