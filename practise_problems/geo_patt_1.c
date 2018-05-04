/*
*
* Author: Rishabh Madan
* Problem: Print the geometric pattern when n is the order
* when, n = 3          1
*                     212
*                    32123
* should be the pattern
*/
#include <stdio.h>

int main(){
    int n;
    printf("Enter the order of the pattern: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n - i; j++)
            printf(" ");
        for (int k = i; k > 0; k--)
            printf("%d", k);
        for (int l = 2; l <= i; l++)
            printf("%d", l);
        printf("\n");
    }
    return 0;
}
