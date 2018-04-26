//Day 5 Program 3 Alternative


#include <stdio.h>
#include <math.h>

#define MAX 10   // all places in the program where compiler will find
                 // MAX it will be replaced with 10



int main(){
    // array to hold each digits of the input number
    int arr[MAX] = {0};
    int i = 0;

    printf("Please note that you can input at most 10 digit number\n");
    printf("What is the total number of digits in the number? ");
    int n;
    scanf("%d", &n);

    // check for the validity
    if (n <= 0 || n > 10){
        printf("Total digits can be > 0 and <=10 only\n");
        return 0;
    }
    // we need to go on assigning from right to left.

    for(i = MAX-n; i < MAX; ++i){
        printf("Input next digit: ");
        scanf("%d", &arr[i]);
    }
    printf("The number that you gave is: ");
    for(i = MAX-n; i < MAX; ++i){
        printf("%d", arr[i]);
    }
    printf("\n");
    // Now ask for the digit
    int d;
    printf("Enter a digit >=1 and <=9 to add: ");
    scanf("%d", &d);
    if (d <= 0 || d >= 10){
        printf("Invalid input, valid is from 1 to 9 ");
        return 0;
    }

    // now will do the addition:
    int carry = 0, unitPlace, sum;
    // we need to keep the count of digits of new number as there can be increase
    // in the number of digits
    int newCount = 0;
    for(i = MAX - 1; i >= 0; --i){
        // first find the sum
        if (i == MAX-1){
            sum = arr[i]  + d;
        }
        else{
            sum = arr[i] + carry;
        }
        // now find the digit at unit's place
        unitPlace = sum % 10;
        // find the carry
        carry = sum / 10;
        arr[i] = unitPlace;
        if (carry == 0)
            break;
    }
    if (i < 0)
        newCount = MAX;
    else if(i < MAX - n && arr[i]!=0){
        newCount= n+1;
    }
    else{
        newCount = n;
    }
    // display the result
    printf("Result: \n");
    for(i = MAX-newCount; i < MAX; ++i){
        printf("%d", arr[i]);
    }

    return 0;
}
