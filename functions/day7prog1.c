/*
*
* Author: Rishabh Madan
* Day7 Prog 1
* Problem: Function to calculate simple interest
*
*/
#include <stdio.h>

double SimpleInterest(double prin, double rate, double time){
    double interest;
    interest = (prin * rate * time) / 100;

    return interest;
}

int main(){
    double pri, roi, time;

    printf("Enter the Principal amount: ");
    scanf("%lf", &pri);
    printf("Enter the Rate of Interest: ");
    scanf("%lf", &roi);
    printf("Enter the time: ");
    scanf("%lf", &time);

    printf("The Interest is: %0.2f", SimpleInterest(pri, roi, time));

    return 0;
    }
