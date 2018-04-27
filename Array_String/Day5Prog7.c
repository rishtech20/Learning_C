/*
*
* Author: Rishabh Madan
* Problem: Calculating and printing the magic square
* Day 5 Program 7
*
*/
#include <stdio.h>

int main(){
    int n; //stores the dimension of the magic square matrix

    printf("Enter dimension of the Magic Square (Only ODD dimension >=1 and <=15 accepted): ");
    scanf("%d", &n);
    //Doing sanity check for the dimension inputted by the user
    if ((n > 15 || n < 1) || (n % 2 == 0)){
        printf("Invalid Input\nValid values are odd integers between 1 and 15");
        return 0;
    }

    //Declaring the 2D array of n dimension and initializing it to zero
    int arr[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            arr[i][j] = 0;
    }

    /*Printing the initialized matrix for sake of sanity-check **TEMPORARY**
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            printf("%4d", arr[i][j]);
        printf("\n");
    }
    **TEMPORARY CODE...TO BE DELETED AFTER COMPLETION.*/

    //Applying the real algorithm
    int r, c, temp_row, temp_col;
    r = n - 1;
    c = n / 2;

    for (int k = 1; k <= n*n; k++){
        arr[r][c] =  k;
        temp_col = c;
        temp_row = r;
        r++;
        c++;
        if ( r == n)
            r = 0;

        if ( c == n)
            c = 0;

        if (arr[r][c] != 0){
            r = temp_row - 1;
            c = temp_col;
        }
    }

    //Printing the Magic Square :-)
    //Sanity-check, checking whether or not the magic constant matches in all the cases.
    int magic_const = (n*(n*n + 1))/2; //Using the formula
    int row_sum; //for storing the sum of the elements of each row
    printf("The Magic Square:\n");
    for (int i = 0; i < n; i++){
        row_sum = 0;
        for (int j = 0; j < n; j++){
            printf("%4d", arr[i][j]);
            row_sum += arr[i][j];
        }
        printf("\n");
        if (row_sum != magic_const)
            printf("Some is not right with the magic square");
    }

    printf("\nThe magic square generated with dimension %d and magic constant: %d\n", n, magic_const);

    return 0;
}
