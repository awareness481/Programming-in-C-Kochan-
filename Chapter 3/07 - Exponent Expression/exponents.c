/*
 Write a program that evaluates the following expression and displays the results (remember to use exponential format to display the result):
Click here to view code image
(3.31 x 10^-8 x 2.01 x 10^-7) / (7.16 x 10^-6 + 2.01 x 10^-8)
 */

#include <stdio.h>
#include <math.h>

int main(void) {
	printf("%e\n", (3.31 * pow(10,-8) * 2.01 * pow(10,-7)) /
	      	       (7.16 * pow(10,-6) + 2.01 * pow(10,-8)));
	return 0;
}
