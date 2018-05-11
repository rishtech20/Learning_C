/*
*
* Author: Rishabh Madan
* Day 9 Prog 11
* Problem: Write a function that receives a string like "book*abacus", and splits it into 2 strings respectively
*
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 30

void splitString(char str[], char first[], char second[]){

    int i = 0, j = 0;

    //Copying the first part of the string str into first[]
    while (str[j] != '*'){
        *(first+i) = *(str + j);
        i++; j++;
    }
    *(first + i) = '\0';

    //Copying the second part of the string into second[]
    j++;
    i = 0;
    while (str[j] != '\0'){
        *(second + i) = *(str + j);
        i++; j++;
    }
    *(second + i) = '\0';
}

int main(){
    char str[100];
    char first[MAX], second[MAX];


    printf("Enter a string of your choice: ");
    scanf("%[^\n]", str);

    splitString(str, first, second);

    printf("First: %s\nSecond: %s", first, second);

    return 0;
}
