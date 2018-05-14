/*
*
* Author: Rishabh Madan
* Problem: Using a structure within a structure in C
* Day 10 Prog 5
*
*/
#include <stdio.h>

typedef struct{
    int day, month, year;
}Date;

typedef struct{
    int eno;
    double basic;
    char name[20];
    Date dob;
}Employee;

int main(){
    Employee e1;
    Employee *e_1;

    e_1 = &e1;

    printf("Enter the Emp. No.: ");
    scanf("%d", &e_1->eno);
    printf("Enter the Name of the Employee: ");
    scanf(" %[^\n]", e_1->name);//Space left before format specifier to avoid the problem of flushing
    printf("Enter the Basic pay: ");
    scanf("%lf", &e_1->basic);
    printf("Enter the Date of Birth(day month year): ");
    scanf("%d", &e_1->dob.day);
    scanf("%d", &e_1->dob.month);
    scanf("%d", &e_1->dob.year);

    printf("-----You Entered following details-----\n");
    printf("Name: %s\n", e_1->name);
    printf("Emp. No.: %d\n", e_1->eno);
    printf("Basic: %0.3f\n", e_1->basic);
    printf("DoB: %d/%d/%d\n", e_1->dob.day, e_1->dob.month, e_1->dob.year);

    return 0;
}
