/*
*
* Author: Rishabh Madan
* Day 9 Prog 9
* Problem: Passing 1D array to a function - printing the square of array elements
*
*/

#include <stdio.h>

void printArrSquare(int *ptr_arr, int n){
    for(int i = 0; i < n; i++){
        printf("%8d,", *(ptr_arr + i) * *(ptr_arr + i));
    }
    printf("\n");
}
//Size of the array is passed to make sure that array elements are accesses within the array bounds

int main(){
    int x[] = {10, 20, 30, 40, 50};
    int y[] = {100, 200, 300, 400, 500};

    printArrSquare(x, 5); //Passing the base address of the array and its size to the function
    printArrSquare(y, 5);

    return 0;
}
