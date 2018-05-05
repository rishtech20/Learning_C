/*

    Header for area.c

*/

#ifndef AREA_H //Macro that tells compiler
//not to include AREA_H if it has already been included by the compiler
//This is used to avoid multiple copies of the same code in the program
//where library is called
#define AREA_H

    double AreaCircle(double);
    double AreaTriangle(double, double);

#endif // AREA_H
