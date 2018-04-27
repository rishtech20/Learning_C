/*
*
* Author: Rishabh Madan
* Problem: 2D array in C
* Day 5 Program 4
*
*/
#include <stdio.h>

int main(){
    int a[3][4];

    printf("Program to manipulate and print a 2D array in C\n");
    //Accessing and manipulating the 2D array Row-wise
    //The Elements in memory are stored in a contiguous fashion
    /*The Arrangement is like follows:
    *  col1 col2 col3 col4  col1 col2 col3 col4 col1 col2 col3 col4
    *  | 0 | 1 | 2 |   3   | 4  | 5  | 6  |  7  | 8 | 9 | 10 | 11 |
    *  Row1-----------------Row2----------------Row3---------------
    *
    */
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++)
            a[i][j] = i * j;
    }

    //Content of the 2D array printed
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }

    return 0;
}
