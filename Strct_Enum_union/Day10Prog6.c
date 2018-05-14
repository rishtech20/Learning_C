/*
*
* Author: Rishabh Madan
* Problem: Using enum type in C
* Day 10 Prog 6
*
*/
#include <stdio.h>

/*Each of the fixed value listed in the enum type has an integer value, for ex: SUN has 0 as its integer
value followed by MON having 1 and so on. You can change default values of enum elements
during declaration (if necessary).*/
typedef enum{
    SUN = 1, MON, TUE, WED, THU, FRI, SAT
}Day_of_week;

int main(){
    Day_of_week day;

    printf("What day it is???? (SUN = 1, MON, TUE, WED, THU, FRI, SAT)");
    scanf("%d", &day);

    if (day == SUN || day == SAT)
        printf("It is a holiday\n");
    else
        printf("It is not a holiday");

    return 0;
}
