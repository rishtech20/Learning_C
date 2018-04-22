/*
*
* Author: Rishabh Madan
* Problem: Unary and binary increment and decrement operators
* Day 3 Program 1
*
*
*/

#include<stdio.h>

int main(){
    int a, b, c;

    //Testing Unary Increment operator
    a = 0;
    printf("Initially a = %d\n", a);
    a++;
    printf("This is a++: %d\n", a);
    ++a;
    printf("This is ++a: %d", a);

    //Testing unary Decrement operator
    b = 0;
    printf("\nInitially b = %d", b);
    b--;
    printf("\nThis is b--: %d\n", b);
    --b;
    printf("This is --b: %d\n", b);

    //Testing Unary and binary operators together
    c = a++ + ++b;
    printf("This is a++ + ++b: %d\n", c);
    //The statement above uses the previous value of a and adds it to incremented value of b
    //after the assignment of the value so generated a is also incremented.
    printf("Now, a = %d and b = %d\n", a,b);

    //here, a = 3 and b = -1
    c = ++a * b--;
    printf("This is ++a * b-- : %d\n", c);

    /*Conclusion: ++a ==> increment a first and then use
    * a++ ==> use first and then increment
    * Similar applies in case of the decrement operator.
    */



    return 0;
}
