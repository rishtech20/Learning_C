/*
*
* Author - Rishabh Madan
* Problem - Flushing problem with character variable
* Day 2 Program 1
*
*/

#include<stdio.h>

int main(){
    char ch;
    int i, j;

    //Following code shows the problem of flushing
    printf("Enter an integer: ");
    scanf("%d", &i);
    printf("Enter the character: ");
    scanf("%c", &ch);
    printf("Enter an integer: ");
    scanf("%d", &j);

    printf("Enter ASCII value of the character variable: %d\n", ch);
    //The above printf() statement should print 10 because the input buffer stores
    // return key and assigns it to the ch variable

    //Solution to the problem of Flushing
    printf("\nEnter an integer: ");
    scanf("%d", &i);
    printf("Enter the character: ");
    scanf(" %c", &ch); //Notice the space before the format specifier.
    printf("Enter an integer: ");
    scanf("%d", &j);

    return 0;
}
