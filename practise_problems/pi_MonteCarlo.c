/*
* Author: Rishabh Madan
* Problem: Estimating the value of pi using Monte Carlo Method
*
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

double gen_x(){
    return (rand())/((double)(RAND_MAX));
}

double gen_y(){
    return (rand())/((double)(RAND_MAX));
}

int isCircle(){
    if(sqrt(pow(gen_x(), 2) + pow(gen_y(), 2)) <= 1)
        return 1;
    return 0;
}

int main(){
    int N, n_circle = 0, n_square;

    printf("Enter the number of Darts (2<=N<=1000000): ");
    scanf("%d", &N);
    n_square = N;

    //Checking the Input for the given range
    if (N>1000000 || N<2){
        printf("Wrong Input!!!");
        return 0;
    }

    for (int i=0; i<N; i++){
        if(isCircle())
            n_circle++;
    }

    printf("pi = %0.4f", (4 * ((double)n_circle))/n_square);

    return 0;
}
