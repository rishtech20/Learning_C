/*
*
* Author - Rishabh Madan
* Problem - Are you a Teenager? : Logical AND operator
* Day 2 Program 6
*
*/
#include<stdio.h>

int main(){
    int age;

    printf("How old are you???");
    scanf("%d", &age);

    int isTeen;
    isTeen = (age >= 13 && age <=19);

    if(isTeen == 1){
        printf("Welcome!!!\n");
    }
    else{
        printf("Please get out!!\n");
    }

    return 0;
}
