/*
*
* Author: Rishabh Madan
* Problem: Find the longest word in the string, Assignment
* Day 6 Program 5
*
*/
#include <stdio.h>
#include <string.h>

int main(){
    //The variable holding the string from which we need to find the longest word
    char my_str[] = "This is a LOOOOOONG String";;
    //Supporting variables to perform the task
    int longest = 0;//To keep the length of the longest word
    char word[20];//To store the word from the my_str
    char longestWord[20];//To the store the longest word
    //counter variables
    int i=0, j;

    while(my_str[i] != '\0' && my_str[i] != ' '){
        j = 0;

        while (my_str[i] != '\0' && my_str[i] != 32){
            word[j] = my_str[i];
            i++;
            j++;
        }

        word[j] = '\0';
        printf("Word: %s\n", word);

        if (strlen(word) >= longest){
            strcpy(longestWord, word);
            longest = strlen(word);
            }
        i++;
    }

    printf("The longest word in the string is: %s", longestWord);
    return 0;
}
