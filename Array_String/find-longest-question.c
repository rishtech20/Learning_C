#include <stdio.h>
#include <string.h>
/*
Instructions:
In this assignment, you will need to find the longest word in a string.
You can assume that,
        1. each word ends with a space or a NULL character (for the last word).
        2. There is only one space in between the words.
In the program you need to use my_str array as the string and you need to use the
initialized string to find the longest word. No need to input another string from
user.

You can use library functions like strlen()/ strcpy() for string operations
Output: Longest word and the length of that word.

--If there are more than one longest words (more than one word with same longest size)
in the string, then your program just need to print the last one.

*/

int main(){
    // find the longest word in the string my_str
    // (I have used British spelling of program :) )
    char my_str[] = "In this programme we will find the longest word in a string";
    /*
        You can test using the following initializations as well:
        char my_str[] = "xxx xxxx xxxxx xxxxxxx xxxxxx xx xx xxxxxxxx aaaaaaaa ooooooooooo";
        char my_str[] = "gg aaaa aaaaaa aaaaaaaaaaaaaaaa";
    */


    int longest = 0; // initially longest word length is 0
    char word[20];  // You will need to find each word from my_str and keep in this array
    char longestWord[20]; // will keep the current longest word here

    int i = 0, j;

    while(my_str[i]!='\0'){
        j = 0;  // use this as index of word array
        // Instructions:
        // here you will need to copy characters from my_str to word,
        // you need to continue doing the copy of characters from ith index of my_str
        // to the jth index of word until you get a space (or NULL for the last word).
        // That means continue copy if the current character is not a space AND not a NULL
        //
        // When the word is copied you need to append a NULL at the end of the word.
        // Now check if the length of the word is greater than longest, if so, then
        // update longest and copy the word to longestWord (you may use strcpy).
        //
        // If you are still not at the end of my_str then update i

    }
    printf("Longest word: %s\n", longestWord);
    printf("Length: %d\n", longest);

    return 0;
}
