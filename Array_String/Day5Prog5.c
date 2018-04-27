/*
*
* Author: Rishabh Madan
* Problem: Sales Person,their sales and commission
* Day 5 Program 5
*
*/
#include <stdio.h>

int main(){
    int r, c;
    //r stores the number of salesperson and c holds the number of items they sold
    //Taking the input for the number of salesmen and their items
    printf("Enter the number of salesperson: ");
    scanf("%d", &r);
    printf("Enter the number of items: ");
    scanf("%d", &c);
    printf("\n\n\n");

    //Using a 2D array (matrix) to store the cost of each item for each salesman
    double sales[r][c];
    //Taking the sales data for each item sold for each salesman
    printf("Enter the sales data: \n\n");

    for (int i = 0;i < r; i++){
        for (int j = 0; j < c; j++){
            printf("Sale amount for salesman %d and item number %d: ", i+1, j+1);
            scanf("%lf", &sales[i][j]); //Note %lf being used to read a double
        }
        printf("\n");
    }
    /*for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++)
            printf("    %0.2f", sales[i][j]); //%f being used here
        printf("\n");
    }*/

    //Printing the report for the sales data
    printf("---------------------------------\n");
    printf("Sales Data\n");
    printf("---------------------------------\n\n");
    double total = 0.0;
    for (int i = 0; i < r; i++){
        printf("Sales data for salesman no. %d\n", i+1);
        total = 0.0;
        for (int j = 0; j < c; j++){
            printf("\tItem %d: $ %0.2f\n", j+1, sales[i][j]);
            total += sales[i][j];
        }
        printf("\tTotal: $ %0.2f\n", total);
        printf("\n\n");
    }

    return 0;
}
