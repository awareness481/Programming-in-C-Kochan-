/*
11. Write a function called arraySum() that takes two arguments: an integer array and the number of elements in the array. Have the function return as its result the sum of the elements in the array.
 */

#include <stdio.h>

int sumArray(int arr[], int n);

int main(void) {
    
    int testArray[6] = {1, 5, 12, 22, -214, 0};
    int n = sizeof(testArray)/sizeof(testArray[0]);

    printf("The sum of the array is %i\n", sumArray(testArray, n));

    return 0;
}

int sumArray(int arr[], int n) {
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}
