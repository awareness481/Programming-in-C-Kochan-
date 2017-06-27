/*
 12b. Using variable-length arrays, rewrite the transposeMatrix() function developed in exercise 12a to take the number of rows and columns as arguments, and to transpose the matrix of the specified dimensions.
 */
#include <stdio.h>


void transpose(int r, int c, int a[][c]);
void print(int r, int c, int a[][c]);

int main(void) {
    
    //Create a dynamic matrix
    printf("Provide the columns of the matrix: ");
    int cols;
    scanf("%i", &cols);

    printf("Provide the rows of the matrix: ");
    int rows;
    scanf("%i", &rows);

    //Fill matrix for testing
    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = j;
        }
    }
    
    transpose(cols, rows, matrix);
    
    return 0;
}


void transpose(int rows, int cols, int a[][cols]) {
    int trmatrix[rows][cols]; 
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            trmatrix[i][j] = a[j][i];
        }
    }

    print(rows, cols, trmatrix);
}

void print(int rows, int cols, int trmatrix[][cols] ) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%i", trmatrix[i][j]);
        }
        printf("\n");
    } 
}
