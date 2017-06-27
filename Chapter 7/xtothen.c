/*
 7. Write a function that raises an integer to a positive integer power. Call the function x_to_the_n() taking two integer arguments x and n. Have the function return a long int, which represents the results of calculating xn.
 */

#include <stdio.h>

//Unsigned because n is always positive
unsigned long int x_to_the_n(int x, int n);

int main(void) {
    int x, n;
    printf("Provide a number and a positive exponent\n");

    scanf("%i %i", &x, &n);
    if( n < 0 ) return -1;
    if( n == 0 && x != 0) {
        printf("%i to the 0 is 0\n", x);
        return 0;
    } else if (n == 0) {
        printf("0 to the 0 is 1\n");
        return 0;
    }

    printf("%i to the %i is %lu\n", x, n, x_to_the_n(x, n));

    return 0;
}

unsigned long int x_to_the_n(int x, int n) {
    unsigned long int result = x;
    for (int i = 0; i < n-1; i++) {
            result *= x;
    }

    return result;
}




