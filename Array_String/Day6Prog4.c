/*
*
* Author: Rishabh Madan
* Problem: Searching and Counting Target in String
* Day 6 Program 4
*
*/
//Input a string and then count the number of spaces and alphabets in the entered string
#include <stdio.h>
#include <string.h>

int main(){
    char str[80];
    printf("Enter the string of your choice: ");
    scanf("%[^\n]", str);

    int countAl = 0, countSp = 0;

    for (int i = 0; str[i] != '\0'; i++){
        if ((str[i] >= 'A' && str[i] <='Z') || (str[i] >= 'a'&& str[i] <= 'z'))
            countAl++;
        else if (str[i] == 32)//32 is ASCII value for space
            countSp++;
    }
    printf("The number of Alphabets: %d\n", countAl);
    printf("The number of Spaces: %d\n", countSp);

    return 0;
}
