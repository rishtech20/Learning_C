/*
*
* Author: Rishabh Madan
* Day 9 Prog 12
* Problem: using malloc() to allocate 'n' bytes to store n integers
*
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int *p;

    printf("Enter the number of integers you want to enter: ");
    scanf("%d", &n);

    //Allocating the appropriate memory
    p = (int *)malloc(n * sizeof(int)); //Allocating appropriate bytes to store n integers
    if (p == NULL){
        printf("Unable to allocate memory of specified size\n Exiting....\n");
        exit(1); //Returns 1 to the executing platform indicating that something didnt go right
    }

    //Storing the integers in the allocated memory
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
