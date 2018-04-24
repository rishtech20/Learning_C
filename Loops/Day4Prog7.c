/*
* Author: Rishabh Madan
* Problem: Pattern 4
* Day 4 Program 7
*
*   Enter the number of lines: 4
*   1
*   12
*   123
*   1234
*/
#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
    return 0;
}
