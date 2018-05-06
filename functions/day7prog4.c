/*
*
* Author: Rishabh Madan
* Day 6 Prog 4
* Problem: Armstrong number?
*
*/
#include <stdio.h>
#include <math.h>

int isArmstrong(int);
int numCount(int);

int main(){
    for(int i=0; i<=50000; i++)
        if (isArmstrong(i))
            printf("%d is an armstrong number\n", i);
    return 0;
}

int isArmstrong(int num){
    int sum = 0, temp = num, count;
    count = numCount(num);

    while (num != 0){
        sum += pow(num%10, count);
        num /= 10;
    }
    return temp == sum;
}

int numCount(int num){
    int count = 0;

    while (num > 0){
        num = num/10;
        count++;
    }
    return count;
}
