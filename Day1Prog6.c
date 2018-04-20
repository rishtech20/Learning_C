/*
*
* Author : Rishabh Madan
* Problem : ASCII value of the characters in C - Case conversion
* Program 4 Day1
*
*/
#include<stdio.h>

int main(){
    char ch;
    printf("Enter a character of your choice: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("\nThe lower case of the inputted character is: %c", ch + 32);
    }
    else if(ch >= 'a' && ch <= 'z'){
        printf("\nThe upper case of the inputted character is: %c", ch - 32);
    }
    else
        printf("\nYou have not inputted a character.");

    return 0;
}
