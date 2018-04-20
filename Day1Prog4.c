/*
*
* Author : Rishabh Madan
* Problem : Dealing with characters in C
* Program 4 Day1
*
*/

#include<stdio.h>

int main(){
    char ch = 'A';
    printf("The variable holds: %c", ch);
    char ch1;
    //Taking input of a character using scanf()
    /*printf("\nEnter a character of your choice: ");
    scanf("%c", &ch1);
    printf("You entered %c", ch1);*/
    //Taking input using getchar()
    printf("\nEnter a character of your choice: \n");
    char ch2;
    ch2 = getchar();
    printf("You typed %c\n", ch2);

    return 0;

}
