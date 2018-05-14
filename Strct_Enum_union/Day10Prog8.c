/*
*
* Author: Rishabh Madan
* Problem: Passing variable number of arguments in C
* Day 10 Prog 8
*
*/
#include <stdio.h>
#include <stdarg.h>

/*A variadic function that can take variable number of arguments*/
int sum(int count, ...){
    int s = 0;
    va_list ap;
    va_start(ap, count);

    for (int i = 0;i < count; i++)
        s += va_arg(ap, int);

    va_end(ap);
    return s;
}


int main(){
    int k = sum(5, 20, 50, 40, 10, 100);

    printf("Sum = %d", k);

    return 0;
}
