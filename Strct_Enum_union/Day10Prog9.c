/*
*
* Author: Rishabh Madan
* Problem: Passing variable number of arguments in C (non - homogeneous data type)
* Day 10 Prog 9
*
*/
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

double sum1(char *format, ...){
    double sum = 0.0;
    va_list ap;
    va_start(ap, format);

    for (int i = 0; i < strlen(format); i++){
        switch(*(format + i)){
            case 'i':
                sum += va_arg(ap, int);
                break;
            case 'f':
                sum += va_arg(ap, double);
                break;
            case 'd':
                sum += va_arg(ap, double);
                break;
            default:
                exit(1);
        }
    }
    return sum;
}

int main(){
    double k = sum1("fiiid", 4.2f, 50, 25, 25, 10.5);

    printf("Sum = %0.2f", k);

    return 0;
}
