/*
*
* Author: Rishabh Madan
* Day 11 Prog 2
* Problem: add command to add given numbers using the command line arguments
*
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    if (argc == 1){
        printf("Insufficient Inputs");
        return 0;
    }

    double sum = 0.0;

    for (int i = 0; i < argc; i++){
        sum += atof(*(argv + i));
    }

    printf("Sum = %lf", sum);

    return 0;
}
