/*
*
* Author: Rishabh Madan
* Day 9 Prog 15
* Problem: An array of pointers
*
*/
#include <stdio.h>

int main(){
    int * p[3]; //An array of pointers, p is a pointer to pointer, p points at an array where there are
    //3 other pointers
    //Alternatively, we could have used, p = (int **)malloc(3*sizeof(int *));
    int ** k; //k is a pointer to pointer
    k = p; //This statement assigns the address that p is pointing to, to k

    int x[] = {1,2,3};
    int y[] = {4,5,6};
    int z[] = {7,8,9};

    p[0] = x; //pointer p[0] is pointer pointing at the base address of array pointed at by x
    p[1] = y; //pointer p[1] is pointer pointing at the base address of array pointed at by y
    p[2] = z; //pointer p[2] is pointer pointing at the base address of array pointed at by z

    //Evaluating the pointer content and what they dereference to
    printf("**p = %d\n", **p);//Shows 1 because, **p dereferences to the content of x[0]
    printf("*(*(p+1)+2) = %d\n", *(*(p+1)+2));//Shows 6, when 1 is added to p then it points at
    //next pointer in the pointer array, dereferencing it yields us the base address of y array
    //on adding 2 to the base address of y array we get the address of the 3rd element in it
    //on further dereferencing it we get the content at y[2] i.e, 6
    //We can also say, that, *(*(p+1) + 2) <==> p[1][2]

    return 0;
}
