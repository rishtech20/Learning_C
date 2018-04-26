/*
*
* Author: Rishabh Madan
* Problem: Represent positive integer as a positive 1D array: Assignment 2
* Day 5 Program 3
*
*/
#include <stdio.h>

int main(){
    int a[10] = {0};
    int n, n_add, sum = 0, carry;

    printf("Please note that you can input at least 10 digit number\n");
    printf("What is the total number of digits in the number? ");
    scanf("%d", &n);

    if (n > 10){
        printf("The program cannot handle n > 10......terminating.....\n\n");
        return 0;
    }

    //Storing the input in the array starting at location 10 - (n - i)
    //for example, if n = 7 and i = 0 then, location is calculated at 10 - (7-0) = 3
    for (int i = 0; i < n; i++){
        printf("Input next digit: ");
        scanf("%d", &a[(10 - (n-i))]);
    }

    printf("The number that you gave is: ");

    //Printing the number entered by the user
    for (int i = (10-n); i < 10; i++)
        printf("%d", a[i]);

    //Taking input from the user to add to the number in the array
    printf("\nEnter a digit >= 1 and <= 9 to add: ");
    scanf("%d", &n_add);

    if (n_add > 9 || n_add < 1){
        printf("\nYou entered a wrong number. Terminating.....");
        return 0;
    }

    //Carrying out the sum operation defined in the problem statement
    carry = n_add;
    for (int i = 9; i >= (10-n); i--){
        sum = a[i] + carry;
        carry = 0;
        if ( sum >= 10){
            a[i] = sum % 10;
            carry = sum / 10;
        }
        else
            a[i] = sum;

        if (i == (10-n)&& carry >= 1)
            a[i-1] = carry;

    }

    //Printing the number entered by the user
    printf("Result: \n")
    for (int i = (carry >= 1?(9-n):(10-n)); i < 10; i++)
        printf("%d", a[i]);



    return 0;
}
