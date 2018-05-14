/*
*
* Author: Rishabh Madan
* Problem: To define a new data type student and write some operations for its attributes
* Day 10 Prog 3
*
*/

#include <stdio.h>

//Template of the structure Student
typedef struct{
    int rollNum;
    char name[20];
    double gp;
}Student;

//Function to take the input from the user
void inputData(Student *sp){ //Passing the address of the object, makes manipulation easier
    printf("Enter the Roll Number: ");
    scanf("%d", &sp->rollNum);
    printf("Enter the name of the Student: ");
    scanf(" %[^\n]", sp->name); //Space before format specifier in order to avoid the flushing problem
    printf("Enter the Grade point: ");
    scanf("%lf", &sp->gp);
}

//Function to print the data on the console
void printData(Student sp){ //Passing the values in the object by copying, makes accessing easier
    printf("Name: %-20s\n", sp.name);
    printf("Roll Number: %d\n", sp.rollNum);
    printf("Grade Point: %0.3f\n", sp.gp);
}

//Main() function
int main(){
    Student s1;

    inputData(&s1);

    printData(s1);

    return 0;
}
