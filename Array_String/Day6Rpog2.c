/*
*
* Author: Rishabh Madan
* Problem: Taking input for a string from the keyboard and pattern matching
* Day 6 Program 2
*
*/
//String in scanf() can put the \0 character in the string as soon as it finds a space, \t or return key
//To avoid this issue we can vouch on the pattern matching ability of the scanf() function
//"^" symbol in pattern matching in scanf() represents any character of keyboard and the symbol or
// character that follows tells the scanf() about where it has to terminate
//For Ex: scanf("%[^\n]") ==> accept everything until return key is pressed, any other key can also be used.
//In example above as soon as return key is pressed it puts \0 character marking the end of scanf()
#include <stdio.h>
#include <string.h>

int main(){
    char str1[50];
    //The uninformed way, this will lose the last name
    printf("What is your Full-Name: ");
    //scanf("%s", str1);
    //printf("Your name: %s", str1);
    //The informed way, using pattern matching
    scanf("%[A-Za-z ]", str1);
    printf("Your name: %s", str1);
    //using [^\n] would be a better way.

    return 0;
}
