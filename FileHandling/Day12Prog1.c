/*
*
* Author: Rishabh Madan
* Day 12 Prog 1
* Prob: A program to access a file in the system and write a character to it.
*
*
*/
#include <stdio.h>

int main(){
    FILE * fp;

    fp = fopen("ABC.txt", "w");

    if (fp == NULL){
        printf("Unable to open the file...Aborting");
        return 1;
    }
    char j, i;

    for (i = 'A', j = 'a'; i <= 'Z', j <= 'z'; i++, j++){
        fputc(i, fp);
        fputc(j, fp);
        fputc(' ', fp);
    }
    fclose(fp);

    printf("File Created Successfully!!!");
    return 0;
}
