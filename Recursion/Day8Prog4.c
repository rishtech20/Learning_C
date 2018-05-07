/*
*
* Author: Rishabh Madan
* Day 8 Prog 4
* Problem: Converting Decimal to binary using recursion
*
*/
//Generally, this can be achieved using a loop and a stack. But, for simplicity we can use a non tail recursion
//as it implements a system generated stack. We vouch on this system generated stack in this case
#include <stdio.h>

void decToBin(int n){
    if (n == 1){
        printf("1");
        return;
    }

    decToBin(n/2);
    printf("%d", n%2);
}

int main(){
    int n;

    printf("Enter the number to be converted to binary: ");
    scanf("%d", &n);

    decToBin(n);
    return 0;
}
