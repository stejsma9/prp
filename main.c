/*
	Author: Ondrej Nentvich
	E-mail: nentvond@fel.cvut.cz

*/

#include <stdio.h>
#include <stdlib.h>

#include "lib_prp/mathematics.h"
#include "lib_prp/fcePrintText.h"

int main(int argc, char**argv) {
    double a = 16.0;
	double b = 3.0;
	double angle = PI;
	
    printf("Hello PRP\n");
    
    sum(a, b);
    printText("Sum\n");
    printText("Diff\n");
    printText("Mul\n");
    printText("Div\n");
    printText("Modulo\n");
    printText("SQRT\n");
    printText("Power of 2\n");
    printText("Diff\n");
    
    return 0;
}
