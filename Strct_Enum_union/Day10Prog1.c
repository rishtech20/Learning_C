/*
*
* Author: Rishabh Madan
* Problem: TO declare a structure using struct and typedef and access its attributes using '.' operator
* Day 10 Prog 1
*
*/
#include <stdio.h>

typedef struct{
    int rollNum;
    char name[20];
    double gp;
}Student;

int main(){
    Student s1;

    printf("Enter the rollNum of the student: ");
    scanf("%d", &s1.rollNum);
    printf("Enter the Name of the student: ");
    scanf(" %[^\n]", s1.name);
    printf("Enter the grade point of the student: ");
    scanf("%lf", &s1.gp);

    printf("Roll Number: %d\n", s1.rollNum);
    printf("Name: %s\n", s1.name);
    printf("Grade point: %0.3f\n", s1.gp);

    return 0;
}
