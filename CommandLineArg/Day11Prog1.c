/*
*
* Author: Rishabh Madan
* Day 11 Prog 1
* Problem: Testing the Command line Arguments in C
*
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    printf("ARGC = %d\n", argc);

    for (int i = 0; i < argc; i++){
        printf("ARGV[%d] = %s\n", i, *(argv + i));
    }

    return 0;
}
