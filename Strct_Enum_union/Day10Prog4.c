/*
*
* Author: Rishabh Madan
* Problem: To define a new data type student and write some operations and business Logic for its attributes
* Day 10 Prog 4
*
*/
#include <stdio.h>

//Structure defining the template for the student object
typedef struct{
    int rollNum;
    char name[20];
    double phy, chem, math;
}Student;

//Function to calculate the grade obtained by a student, Business Logic
char gradeObtained(double phy, double chem, double math){
    double avg = (phy + chem + math)/3.0;
    if (avg >= 90)
        return 'A';
    else if (avg >=80 && avg < 90)
        return 'B';
    else if (avg >= 70 && avg < 80)
        return 'C';
    else if (avg >= 60 && avg < 70)
        return 'D';
    else if (avg >= 50 && avg < 60)
        return 'E';
    else
        return 'F';
}

//Function to take the input from the user for the student object
void inputStuData(Student *sp){
    printf("Enter the name of the student: ");
    scanf("%[^\n]", sp->name);
    printf("Enter the Roll Number: ");
    scanf("%d", &sp->rollNum);
    printf("Enter the marks for phy, chem and math: ");
    scanf("%lf", &sp->phy);
    scanf("%lf", &sp->chem);
    scanf("%lf", &sp->math);
}

//Function to print the details of the student on the console
void printStuData(Student st){
    printf("-------------------------------------------");
    printf("\nFollowing are the details of the student\n");
    printf("-------------------------------------------");
    printf("\nName: %s\n", st.name);
    printf("Roll Number: %d\n", st.rollNum);
    printf("Marks Obtained - Subject-wise\n Physics:%-4.3f\n Chemistry:%-4.3f\n Mathematics:%-4.3f\n", st.phy, st.chem, st.math);
    printf("\nGrade Obtained: %c\n", gradeObtained(st.phy, st.chem, st.math));
    printf("--------------------------------------------\n");
}

//Main() function
int main(){
    Student s1;

    inputStuData(&s1);
    printStuData(s1);

    return 0;
}
