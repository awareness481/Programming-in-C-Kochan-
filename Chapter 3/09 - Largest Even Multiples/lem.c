/*
 Write a program to find the next largest even multiple for the following values of i and j:
 */

#include <stdio.h>

int main(void) {
	int i[3];
	i[0] = 365;
	i[1] = (int)12.258;
	i[2] = 996;

	int j[3];
	j[0] = 7;
	j[1] = 23;
	j[2] = 4;

	for (int k = 0; k < 3; k++) {
	       printf("Largest even multiple of %i and %i is %i\n", i[k], j[k], i[k] + j[k] - i[k] % j[k]);
	}
	return 0;
}	
