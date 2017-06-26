//Write a program that calculates the average of an array of 10 floating-point values.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {
    float arr[10];
    
    float sum = 0;

    srand(time(NULL));
    //Random Initialization
    for (int i = 0; i < 10; i++)
        arr[i] = ((float)rand()/(float)(RAND_MAX)) * 10.0;

    for (int i = 0; i < 10; i++)
        sum += arr[i];

    printf("%f\n", sum);
    return 0;
}

    
