/*
*
* Author: Rishabh Madan
* Problem: Inroduction to strings in C
* Day 6 Program 1
*
*/
#include <stdio.h>
#include <string.h>

int main(){
    char str1[] = "This is an initialized string", str2[80];
    //In case we have a string then we can assign content to it from
    //other string by copying it
    strcpy(str2, str1);

    printf("The content of str1: %s\n", str1);
    printf("The content of str2 (copied from str1): %s\n", str2);

    //Directly content can also be copied into a string
    char str3[50];
    strcpy(str3, "This is Rishabh!!");

    printf("Content copied directly to the string variable: %s\n", str3);

    return 0;

}
