/*
*
* Author: Rishabh Madan
* Day 7 Prog 2
* Problem: Calculating the sum of prime numbers in the given range
*
*/
#include <stdio.h>
#include <math.h>

int isPrime(int num){
    for (int i = 2; i <= sqrt(num); i++)
        if (num % i == 0)
            return 0;
    return 1;
}

int addPrime(int lb, int ub){
    int sum=0;
    for (int i = lb; i <= ub; i++)
        if (isPrime(i))
            sum += i;
    return sum;
}

int main(){
    int lb, ub;

    printf("Enter the range of the prime numbers to calculate the sum: ");
    scanf("%d", &lb);
    scanf("%d", &ub);

    printf("The sum of the prime numbers in the range %d to %d is %d", lb, ub, addPrime(lb, ub));

    return 0;
}
