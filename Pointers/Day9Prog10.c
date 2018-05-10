/*
*
* Author: Rishabh Madan
* Day 9 Prog 10
* Problem: Toggling the characters of a string by passing 1d array (string) to a function using recursion
*
*/

#include <stdio.h>

int i = 0;

void toggleString(char *ptr_str){
    if (*(ptr_str+i)=='\0')
        return;
    else if (*(ptr_str+i)<= 'Z' && *(ptr_str+i)>='A')
        *(ptr_str+i) += 32;
    else if (*(ptr_str+i)<= 'z' && *(ptr_str+i)>='a')
        *(ptr_str+i) -= 32;
    i++;
    toggleString(ptr_str);
    //This can also be done using for loop as it is a TAIL recursion
}

int main(){
    char str[100];

    printf("Enter a string of your choice: ");
    scanf("%[^\n]", str);

    toggleString(str);

    printf("Toggled String: %s\n", str);

    return 0;
}
