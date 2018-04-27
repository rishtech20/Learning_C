/*
*
* Author: Rishabh Madan
* Problem: Determining the length of the string
* Day 6 Program 3
*
*/
//The position of the NULL character \0 in a string not only marks the end of the string but its position
//in the character array tells us about the length of the string, i.e, total number of characters in the
//string
#include <stdio.h>
#include <string.h>

int main(){
    char str[80];

    printf("Enter a string of your choice: ");
    scanf("%[^\n]", str);

    int i = 0;
    //Searching for \0 to find the length
    while (str[i] != '\0')
        i++;
    printf("The length of the string is: %d", i);

    //Using the library function to determine the length of the string
    printf("\nThe length of the string using strlen(): %d", strlen(str));

    return 0;
}
