/*
 12. A matrix M with i rows, j columns can be transposed into a matrix N having j rows and i columns by simply setting the value of Na,b equal to the value of Mb,a for all relevant values of a and b.
a. Write a function transposeMatrix() that takes as an argument a 4 × 5 matrix and a 5 × 4 matrix. Have the function transpose the 4 × 5 matrix and store the results in the 5 × 4 matrix. Also write a main() routine to test the function.
*/

#include <stdio.h>

int trmatrix[5][4];
void transpose(int a[][5]);
void print(void);

int main(void) {
    
    //Create a 4x5 matrix for testing
    int matrix[4][5];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            matrix[i][j] = j;
        }
    }
    
    transpose(matrix);
    print();
    return 0;
}


void transpose(int a[][5]) {
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            trmatrix[i][j] = a[j][i];
        }
    }
}

void print(void) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%i", trmatrix[i][j]);
        }
        printf("\n");
    } 
}
