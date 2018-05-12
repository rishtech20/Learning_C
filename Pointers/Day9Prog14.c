/*
*
* Author: Rishabh Madan
* Day 9 Prog 14
* Problem: using realloc() to allocate 'n' + 3 bytes to store n + 3 integers
*
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, *p;

    printf("Enter the number of integers you want to enter: ");
    scanf("%d", &n);

    p = (int *)malloc(n * sizeof(int));
    if (p == NULL){
        printf("Unable to allocate memory\nExiting....\n");
        exit(1);
    }

    for (int i = 0; i < n; i++){
        printf("Next: ");
        scanf("%d", (p+i));
    }

    printf("The content of the array is : \n");
    for (int i = 0; i < n; i++){
        printf("%4d", *(p+i));
    }

    //Now, reallocating the memory and growing the size dynamically
    int new_n = n + 3;
    p = (int *)realloc(p, new_n * sizeof(int));
    *(p + n) = 10; *(p + n + 1) = 20; *(p + n + 2) = 30;

    printf("\nThe content of the NEW array is : \n");
    for (int i = 0; i < new_n; i++){
        printf("%4d", *(p+i));
    }

    free(p);

    return 0;
}
