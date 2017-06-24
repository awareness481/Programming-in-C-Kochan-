/*
 Write a program that calculates the sum of the digits of an integer. For example, the sum of the digits of the number 2155 is 2 + 1 + 5 + 5 or 13. The program should accept any arbitrary integer typed in by the user.
*/

#include <stdio.h>

int main(void) {
	printf("Please provide a positive number\n");
	int num;
	scanf("%i", &num);

	if (num < 0) return 1;
	
	int sum = 0;
	while (num > 0){
		sum += num % 10;
		num /= 10;
	}
	printf("The sum of all the integer digits is %i\n", sum);
	return 0;
}
