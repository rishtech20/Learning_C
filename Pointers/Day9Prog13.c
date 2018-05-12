/*
*
* Author: Rishabh Madan
* Day 9 Prog 13
* Problem: using calloc() to allocate 'n' bytes to store n integers
*
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int  n, *p;

    printf("Enter the number of integers you want to enter: ");
    scanf("%d", &n);

    p = (int *)calloc(n, sizeof(int));
    if (p == NULL){
        printf("Unable to allocate the memory\nExiting....\n");
        exit(1);
    }

    //Taking the integers from the user
    for (int i = 0; i < n; i++){
        printf("Next: ");
        scanf("%d", p + i);
    }
    //Displaying the integers stored in the allocated memory
    for (int i = 0; i < n; i++){
        printf("%4d", *(p + i));
    }

    free(p);

    return 0;
}
