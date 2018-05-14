/*
*
* Author: Rishabh Madan
* Problem: TO declare a structure using struct and typedef and access its attributes using pointer '->' operator
* Day 10 Prog 2
*
*/
#include <stdio.h>

typedef struct{
    int rollNum;
    char name[20];
    double gp;
}Student; //Student is the alias we can use to declare a variable of type student.

int main(){
    Student s1;
    Student *sp;

    sp = &s1; //Pointer of type student storing the address of object of same type
    //Now we can access and manipulate the content of the s1 object using the pointer
    printf("Enter the Roll Number: ");
    scanf("%d", &sp->rollNum);
    printf("Enter the Name of the Student: ");
    scanf(" %[^\n]", sp->name); //A space before format specifier to avoid the flushing problem
    printf("Enter the Grade point: ");
    scanf("%lf", &sp->gp);

    //Printing the values obtained from the user
    printf("Roll Number: %d\n", sp->rollNum);
    printf("Name: %s\n", sp->name);
    printf("Grade point: %0.3f\n", sp->gp);

    return 0;
}
