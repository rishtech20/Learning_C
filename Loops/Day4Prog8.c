/*
* Author: Rishabh Madan
* Problem: Pattern 5
* Day 4 Program 8
*
*   Enter the number of lines: 4
*   0
*   10
*   010
*   1010
*/
#include<stdio.h>

int main(){
    int n;

    printf("Enter the number of lines: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        for (int j = 1,tp = (i%2==0); j <= i; j++, tp = !tp)
            printf("%d", tp);
        printf("\n");
    }
    return 0;
}
