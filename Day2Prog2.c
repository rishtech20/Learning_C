/*
*
* Author - Rishabh Madan
* Problem - Explicit Type conversion (type casting) in C
* Day 2 Program 2
*
*/
#include<stdio.h>

int main(){
    int a, b;
    a = 5;
    b = 2;
    float r;
    r = a/b;

    //When operation is executed between two integers it will result in an integer
    printf("Quotient: %f\n", r);

    /*When operation is executed between an integer and a float, the compiler forcefully
    * convert it into float and the result is float as floating point has higher precedence
    * as compared to an integer.
    */
    r = (float)a/b;
    printf("Quotient: %f", r);

    return 0;

}
