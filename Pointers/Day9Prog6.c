/*
*
* Author: Rishabh Madan
* Day 9 Prog 6
* Problem: Swapping two numbers using pointers
*
*/

#include <stdio.h>

void swap_num(int *a, int *b){ //These pointers get the address of the variables x and y

    int temp;

    temp = *a;//using '*', dereference operator we can easily manipulate the values of x and y
    *a = *b;
    *b = temp;

}

int main(){

    int x = 100, y = 200;

    printf("x = %d, y = %d\n", x, y);

    swap_num(&x, &y);

    printf("x = %d, y = %d", x, y);

    return 0;
}
