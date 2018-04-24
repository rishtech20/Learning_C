/*
* Author: Rishabh Madan
* Problem: Pattern 2
* Day 4 Program 5
*
*   Enter the number of lines: 3
*   *
*   **
*   ***
*   **
*   *
*/
#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);

    for (int i = 1; i <= 2*n; i++){
        for (int j = 1; j <=(i<=n?i:(2*n+1)-i); j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
