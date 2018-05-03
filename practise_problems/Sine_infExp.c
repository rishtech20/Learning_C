/*
*
* Author: Rishabh Madan
* Problem2: Finding sine of an angle using the infinite series expansion
*
*/
#include <stdio.h>
#include <math.h>

int main(){
    double rad, term, sinx;
    int flag, sign, ktemp;
    do{
        do{
            flag = 0;
            printf("Enter the angle in radians (-1<x<=1): ");
            scanf("%lf", &rad); //Notice for reading double %lf is used.

            if (rad < -1 || rad > 1)
                flag = 1;
        } while (flag);

        sinx = rad;
        sign = -1;
        ktemp = 1;

        for (int i = 3; i <= 22 ; i+=2, !sign){
            term = (pow(rad, i) * sign) / (i * (i - 1) * ktemp);
            sinx += term;
            ktemp *= (i * (i - 1));
        }

    }while (0);

    printf("The sine of the angle: %0.2f", sinx);

    return 0;
}
