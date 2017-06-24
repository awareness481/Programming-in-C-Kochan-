/*
 Write a program to generate and print a table of the first 10 factorials.
*/

#include <stdio.h>

int main(void) {
	int fact = 1;
	for (int i = 1; i < 11; i++) {
		fact *= i;
		printf("%10i! | %i\n", i, fact);
	}
	return 0;
}
