/*
* Author: Rishabh Madan
* Problem: Pattern 3
* Day 4 Program 6
*
*   Enter the number of lines: 4
*   1
*   22
*   333
*   4444
*/
#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++)
            printf("%d ", i);
        printf("\n");
    }
    return 0;
}
