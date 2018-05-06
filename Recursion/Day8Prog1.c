/*
*
* Author: Rishabh Madan
* Day 8 Prog 1
* Problem: To illustrate the working of recursion
*
*/
#include <stdio.h>

void printMsg(unsigned int n){
    if (n == 0) //Base recursive condition
        return;
    printf("Hello World %d\n", n);
    n--;
    printMsg(n);
}

int main(){
    int n;
    printMsg(5);

    return 0;
}
