/*
*
* Author: Rishabh Madan
* Problem: Pell Number using recursion
*
*/
#include <stdio.h>

long pellNum(int n){
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;

    return (2*pellNum(n-1))+pellNum(n-2);
}

int main(){
    for (int n = 1; n <= 12; n++)
        printf("%ld\n", pellNum(n));
    return 0;
}
