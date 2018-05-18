/*
*
* Author: Rishabh Madan
* Day 12 Prog 2
* Prob: A program to access a file in the system and read a character from it.
*
*/
#include <stdio.h>

int main(){
    FILE * fp;

    fp = fopen("ABC.txt", "r");
    if (fp == NULL){
        printf("File not available!!!\n");
        return 0;
    }

    do{
        printf("%c", fgetc(fp));
    }while (!feof(fp));

    fclose(fp);

    return 0;
}
