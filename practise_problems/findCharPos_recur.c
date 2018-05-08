/*
*
* Author: Rishabh Madan
* Problem: The first position of the given character in a string
*
*/
#include <stdio.h>
#include <string.h>

int find_character (char s[], int pos, char ch){
    if (pos < 0)
        return 0;

    if (pos == strlen(s))
        return -1;

    if (s[pos] == ch)
        return pos;

    return find_character(s, pos + 1, ch);
}

int main(){

    printf("Position is %d\n", find_character("This is awesome!!!", 0, 's'));
    printf("Position is %d\n", find_character("1234586strange7string", 0, '7'));
    printf("Position is %d\n", find_character("1234586strange7string", 0, 'l'));

    return 0;
}
