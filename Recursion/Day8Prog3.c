/*
*
* Author: Rishabh Madan
* Day 8 Prog 3
* Problem: Illustration of NON TAIL/Head recursion which is not better than looping in some cases
* due to stack management activity.
*
*/
#include <stdio.h>

void printN(int n){
    if (n==0)
        return;
    printN(n-1); //There is an overhead in this recursion will lead to stacking
    printf("%d\n", n); //Better to use looping in this particular case
}

int main(){
    printN(10);
    return 0;
}
