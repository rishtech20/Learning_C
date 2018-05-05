/*This file utilises the utilities that we have archived in libxutils and it also picks up
the signature of the function from the header folder in the file system*/

#include <stdio.h>
#include "header/area.h"
#include "header/mymath.h"

int main(){
    double interest;
    interest = SimpleInterest(10000.0, 8.5, 6.5);
    printf("The simple interest is: %0.2f\n", interest);

    double t_area = AreaTriangle(5.5, 10.5);
    double c_area = AreaCircle(10.5);

    printf("\nThe area of the triangle is: %0.2f", t_area);
    printf("\nThe area of the circle is: %0.2f", c_area);

    return 0;
}
