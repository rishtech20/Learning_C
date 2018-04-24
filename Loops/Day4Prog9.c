/*
* Author: Rishabh Madan
* Problem: Printing random numbers with a seed
* Day 4 Program 9
*
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int k;
    long t = time(NULL);
    srand(t);

    for(int i = 0; i<=100; i++){
        k = rand()%100;
        printf("random number %d = %ld\n", i, k);
    }
    printf("%ld", t);

    return 0;
}
