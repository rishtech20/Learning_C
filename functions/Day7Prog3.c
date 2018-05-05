/*
*
* Author: Rishabh Madan
* Day 7 Prog 3
* Problem: Checking whether upper case or lower case and then converting it to upper or lower respectively
*
*/
#include <stdio.h>

int is_upper (char ch){
    if (ch >= 'A' && ch <= 'Z')
        return 1;
    return 0;
}

int is_lower (char ch){
    if (ch >= 'a' && ch <= 'z')
        return 1;
    return 0;
}

char to_upper (char ch){
    if (is_lower(ch))
        return (ch - 32);
    return ch;
}

char to_lower (char ch){
    if (is_upper(ch))
        return (ch + 32);
    return ch;
}

int main(){
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    printf("\nWhole string in upper case: ");
    for (int i = 0; str[i] != '\0'; i++){
        printf("%c", to_upper(str[i]));
    }

    printf("\nWhole string in lower case: ");
    for (int i = 0; str[i] != '\0'; i++){
        printf("%c", to_lower(str[i]));
    }
    return 0;
}
