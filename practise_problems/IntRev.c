/*
*
* Author: Rishabh Madan
* Problem 1: To find the reverse of an integer
*
*/
#include <stdio.h>

int main(){
    int N,rem, temp, rev;
    char ch = 'y';

    do{
        printf("Enter a number of your choice 9 (0<N<=300000): ");
        scanf("%d", &N);

        if(N<0 || N>300000)
            break;

        rev = 0;
        temp = N;

        while (temp != 0){
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }
        printf("The reverse of %d is %d\n", N, rev);

        printf("DO you want to continue???");
        scanf(" %c", &ch);

    }while (ch == 'y' || ch == 'Y');

    return 0;
}
