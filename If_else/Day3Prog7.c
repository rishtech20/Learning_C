/*
*
* Author: Rishabh Madan
* Problem: Are you a teenager??? - using conditional operator
* Day 3 Program 7
*
*
*/
#include<stdio.h>

int main(){
    int age;

    printf("How old are you?? ");
    scanf("%d", &age);

    //Ternary conditional operator ?:
    age>=13&&age<=19?printf("You are a teenager!!!"):printf("You are not a teenager!!");

    return 0;
}
