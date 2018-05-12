/*
*
* Author: Rishabh Madan
* Day 9 Prog 16
* Problem: 2D array pointers - Allocating 2d pointer arrays dynamically
*
*/
#include <stdio.h>
#include <stdlib.h>

//Function to allocate the memory for the 2D array dynamically using malloc()
int ** allocateMem(int nRows, int nCols){
    int **p;

    p = (int **)malloc(nRows * sizeof(int *));

    if (p == NULL)
        exit(0);

    for (int i = 0; i < nRows; i++){
        *(p + i) = (int *)malloc(nCols * sizeof(int));
    }

    return p;
}

//Function to take the input from the user by accessing the addresses of the array
void inputData(int **p, int nRows, int nCols){
    printf("Enter the values:\n");

    for (int i = 0; i < nRows; i++){
        for (int j = 0; j < nCols; j++){
            printf("Enter value for %d row and %d column: ", i, j);
            scanf("%d", (*(p+i)+ j));
        }
    }
}

//Function to print the data of the 2D array
void printData(int **p, int nRows, int nCols){
    printf("\nThe content of the array is:\n");

    for (int i = 0; i < nRows; i++){
        for (int j = 0; j < nCols; j++){
            printf("%4d", *(*(p+i)+j));
        }
        printf("\n");
    }
}

//Function to Deallocate the memory previously assigned
void deAllocateMem(int **p, int nRows){
    for (int i = 0; i < nRows; i++)
        free(*(p+i));
    free(p);

    printf("Deallocation was successful!!!");
}

int main(){
    int **p;
    int nRows, nCols;

    printf("Enter the number of rows: ");
    scanf("%d", &nRows);
    printf("Enter the number of Columns: ");
    scanf("%d", &nCols);

    p = allocateMem(nRows, nCols);

    inputData(p, nRows, nCols);

    printData(p, nRows, nCols);

    deAllocateMem(p, nRows);

    return 0;
}
