/*
*
* Author: Rishabh Madan
* Problem: Finding transpose of a matrix
* Day 5 Program 6
*
*/
#include <stdio.h>

int main(){
    int r, c;
    //Prompting the user to enter the no of rows and columns
    printf("Enter number of rows of a matrix (>=3 and <=10): ");
    scanf("%d", &r);
    if (r<3 || r>10){
        printf("Invalid number of rows, acceptable is >=3 and <=10\n");
        return 0;
    }
    printf("Enter number of columns of a matrix (>=3 and <=10): ");
    scanf("%d", &c);
    if (c<3 || c>10){
        printf("Invalid number of columns, acceptable is >=3 and <=10\n");
        return 0;
    }
     int mat[r][c] ;
    //Prompting the user to enter the matrix row-wise
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            printf("Matrix[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    //Printing the matrix entered by the user
    printf("\nMatrix as given by you:\n");
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }

    //2declaring the 2D array to store the transpose of the matrix
    int matT[c][r];

    //Applying the loop transpose the matrix
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            matT[j][i] = mat[i][j];
        }
    }

    printf("\nTranspose of the given matrix: \n");
    for (int i = 0; i < c; i++){
        for (int j = 0; j < r; j++){
            printf("%4d", matT[i][j]);
        }
        printf("\n");
    }

    return 0;
}
