/*
Write a program that accepts two integer values typed in by the user. Display the result of dividing the first integer by the second, to three-decimal-place accuracy. Remember to have the program check for division by zero.
 */

#include <stdio.h>

int main(void) {
    printf("Provide two integer values\n");
    int a, b;
    scanf("%i %i", &a, &b);

    if (b == 0) {
        printf("Division by zero is not possible\n");
        return 1;
    }

    printf("%i divided by %i equals to %.3f\n", a, b, a / (float) b);
    return 0;
}
