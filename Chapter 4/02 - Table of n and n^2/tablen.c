/*
 Write a program to generate and display a table of n and n^2, for integer values of n ranging from 1 to 10. Be certain to print appropriate column headings.
 */

#include <stdio.h>

int main(void) {
	
	for (int i = 1; i < 11; i++) {
		printf("%.2i | %.2i\n", i, i*i);
		printf("-------\n");
	}
}
