/*
*
* Author: Rishabh Madan
* Day 8 Prog 2
* Problem: Illustration of TAIL recursion
*
*/
#include <stdio.h>

int printN(int num){
    if (num == 0)
        return;
    printf("%d\n", num);
    num--;
    printN(num); //Recursive function call at the end of the function leads to compiler not
    //pushing it on the stack and thus this is called TAIL recursion and is equivalent to using
    //looping in the program
}

int main(){
    printN(5);
    return 0;
}
