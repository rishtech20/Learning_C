/*
*
* Author : Rishabh Madan
* Problem : Testing the Arithmetic Operators in C
* Program 3 Day1
*
*/

#include<stdio.h>

int main(){
    int a,b;
    printf("Enter two numbers of your choice: ");
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a,b,a+b);
    printf("%d - %d = %d\n", a,b,a-b);
    printf("%d * %d = %d\n", a,b,a*b);
    printf("%d / %d = %d\n", a,b,a/b);
    printf("%d %% %d = %d\n", a,b,a%b);
    //Note the '%' in above statement
}
