/*
*
* Author: Rishabh Madan
* Problem: Application of 1D arrays in C
* Day 5 Program 2
*
*/
#include <stdio.h>
#include <math.h>

int main(){
    float a[20], b[20], he;
    int i;

    printf("Enter maximum 20 numbers, terminate with 0.0\n");

    for(i = 0; i < 20; i++){
        if (i == 0)
            printf("First number: ");
        else
            printf("Next: ");
        scanf("%f", &he);

        if (he == 0.0)
            break;
        else
            a[i] = he;
    }
    printf("\nThere are total %d numbers given as input\n", i);

    for (int j = 0; j < i; j++){
        if (j%2 == 0)
            b[j] = 2*a[j];
        else
            b[j] = cbrt(a[j]);
    }


    float sum1 = 0.0, sum2 = 0.0;
    printf("    Input Array\t2nd Array\n");


    for (int j = 0; j < i; j++){
        printf("    %0.5f\t%0.5f\n", a[j], b[j]);
        sum1 += a[j];
        sum2 += b[j];
    }

    printf("\nSum of the first array:  %0.5f\n", sum1);
    printf("\nSum of the second array: %0.5f\n", sum2);

    return 0;
}
