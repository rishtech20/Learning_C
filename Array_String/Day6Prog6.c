/*
*
* Author: Rishabh Madan
* Problem: Determine whether the entered string is a palindrome or not
* Day 6 Program 6
*
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]", str);

    int isPalindrome = 0, i = 0, j = 0;
    char str2[100];

    //Loop to remove the unwanted characters form the the string
    while (str[i] != '\0'){
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <='z')){
            str[i] = (char)tolower(str[i]);
            str2[j++] = str[i];
        }
        i++;
    } str2[j]='\0';

    //printf("The string entered after filtering: %s", str2);

    char str_rev[100];

    //Loop to reverse the string for the purpose of comparison
    for (i = 0; str2[i] != '\0'; i++){
        str_rev[strlen(str2) - i -1] = str2[i];
    }
    str_rev[strlen(str2)] = '\0';
    //printf("\nThe string entered after filtering: %s", str_rev);

    isPalindrome = strcmp(str2, str_rev);

    if (!isPalindrome){
        printf("\nYes, it is Palindrome!\n");
    }
    else{
        printf("\nNo, not a Palindrome\n");
    }


    return 0;
}
