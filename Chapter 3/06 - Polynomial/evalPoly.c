/*
 Write a program to evaluate the polynomial shown here:
 3x^3 - 5x^2 + 6
 for x = 2.55
 */

#include <stdio.h>
#include <math.h>

int main(void) {
	float x = 2.55;
	printf("Evaluation: %.3g\n", 3*pow(x,3) - 5*pow(x,2) + 6);
	return 0;
}
