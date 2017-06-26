/*
 You don’t need to use an array to generate Fibonacci numbers. You can simply use three variables: two to store the previous two Fibonacci numbers and one to store the current one. Rewrite Program 6.3 so that arrays are not used. Because you’re no longer using an array, you need to display each Fibonacci number as you generate it.
 */

#include <stdio.h>

int main(void) {
    
    printf("Fibonacci N1 is 1\n");
    for (int a = 0, b = 1, i = 2; i < 47; i++) {
        int temp = b;
        b = a + b;
        a = temp;
        printf("Fibonacci N%i is %i\n", i , b);
    }

    return 0;
}
