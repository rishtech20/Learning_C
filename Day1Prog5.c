/*
*
* Author : Rishabh Madan
* Problem : ASCII value of the characters in C - printing all the capital letters
* Program 4 Day1
*
*/
#include<stdio.h>

int main(){
    char ch = 'A';
    printf("%d and %c\n", ch, ch);

    //Printing all the letters of English alphabets in capital
    for(int i = 65; i<91; i++){
        printf("%d - %c\n", i, i);
    }
    return 0;
}
