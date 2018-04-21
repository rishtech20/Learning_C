/*
*
* Author - Rishabh Madan
* Problem - Secret of scanf(): the return type of the function
* Day 2 Program 4
*
*/
#include<stdio.h>

int main(){
    int x, y;

    printf("Enter the integers: ");
    //the statement belows stores the returned value from scanf()
    //into i, the value shows the successful number of values read by scanf()
    int i = scanf("%d %d", &x, &y);

    printf("\nx = %d, y = %d, i = %d", x, y, i);

    return 0;

}
