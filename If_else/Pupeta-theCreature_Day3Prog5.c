/*
*
* Author: Rishabh Madan
* Problem: Pupeta - the creature
* Day 3 Program 5
*
*
*/
#include<stdio.h>

int main(){
    short int n;

    printf("How many neighbors does Pupeta has??? ");
    scanf("%hi", &n);

    if (n < 0 || n > 8)
        printf("Invalid number of neighbors.");

    if (n == 0)
        printf("Sad and will force you to listen to his story, will make you late");
    else if (n == 1)
        printf("He will ask you to deliver half of the pizza to his only neighbor, you may be late");
    else if (n >= 2 && n<=5)
        printf("Will have great mood and will be singing song. May crack a joke as well. You will get good tips, definitely.");
    else if (n == 7)
        printf("He will be making drink for his neighbors and will invite you to taste.\nBut will not give you tip");
    else if (n == 6 || n == 8)
        printf("Too angry and furious, deliver the pizza and leave ASAP");

    return 0;
}
