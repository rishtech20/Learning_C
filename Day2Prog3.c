/*
*
* Author - Rishabh Madan
* Problem - Secret of printf(): the return type of the function
* Day 2 Program 3
*
*/
#include<stdio.h>

int main(){
    int i;

    /*After printing the text on the console, the printf() function returns the number
    * of characters it prints on the console
    */
    i = printf("Hello  ");
    printf("%d\n", i);

    //The printf() can be further nested in with the other printf()

    printf("%d\n", printf("Hello World!!!   "));

    return 0;

}
