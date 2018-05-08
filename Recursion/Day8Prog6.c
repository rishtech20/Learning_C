/*
*
* Author: Rishabh Madan
* Day 8 Prog 6
* Problem: nth fibonacci term using recursion
*
*/
#include <stdio.h>

long getFibTerm (int t){
    if (t == 1 || t == 2)
        return 1;

    return getFibTerm(t-1) + getFibTerm(t-2);
}

int main(){
    for (int t = 1; t <= 20; t++){
        printf("%ld\n", getFibTerm(t));
    }
    return 0;
}
