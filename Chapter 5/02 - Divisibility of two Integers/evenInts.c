/*
 Write a program that asks the user to type in two integer values at the terminal. Test these two numbers to determine if the first is evenly divisible by the second, and then display an appropriate message at the terminal.
*/

#include <stdio.h>

int main(void){
    printf("Please provide two integer numbers\n");
    int first, sec;
    scanf("%i %i", &first, &sec);

    if (sec == 0) {
        fprintf(stderr, "%s", "Please provide a non-zero second value\n");
    }

    printf("The first integer is %s divisible by the second integer\n", first % sec == 0 ? "evenly" : "not evenly");
    
    return 0;
}
