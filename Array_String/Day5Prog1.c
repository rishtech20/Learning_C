/*
*
* Author: Rishabh Madan
* Problem: Allocate n random numbers to an array and find the sum and average
* Day 5 Program 1
*
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n, sum = 0;;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int x[n]; //Allocating an array dynamically

    srand(time(NULL)); //Seed to generate the random numbers

    for(int i = 0; i < n; i++){
        x[i] = rand()%100;
    }

    for(int i = 0;i < n; i++){
        printf("%4d", x[i]);
        sum += x[i];
    }

    printf("\nSum = %d and n = %d", sum, n);

    double avg = (double)sum / n;

    printf("\nAverage = %0.2f\n", avg);

    return 0;
}
