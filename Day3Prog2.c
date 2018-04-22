/*
*
* Author: Rishabh Madan
* Problem: Short circuit feature of AND and OR
* Day 3 Program 2
*
*
*/

#include<stdio.h>

int main(){
    short int a = 0, b = 1, c;

    c = a++ && ++b;
    printf("c = a++ && ++b: %d", c);
    c = ++a && ++b;
    printf("\nc = ++a && ++b: %d", c);

    /*AND and OR operators are left to right associative
    * In case of AND, when, the operand on the left hand side is zero then the operand on the right
    * hand side is not evaluated and this is what is known as the short circuit feature.
    * Same applies in case of OR operator as well.
    */

    return 0;

}
