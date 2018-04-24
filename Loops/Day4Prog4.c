/*
*
* Author: Rishabh Madan
* Problem: Pattern 1
* Day 4 Program 4
*
*   Enter the number of lines: 3
*   ***
*   **
*   *
*/
#include<stdio.h>

int main(){
    int n;

    printf("Enter the number of lines: ");
    scanf("%d", &n);

    for(int i = n; i != 0; i--){
        for (int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
