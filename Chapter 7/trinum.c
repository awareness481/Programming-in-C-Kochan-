/*
 Modify Program 7.4 so the value of triangularNumber is returned by the function. Then go back to Program 4.5 and change that program so that it calls the new version of the calculateTriangularNumber() function.
*/

#include <stdio.h>

int calculateTriangularNumber (int n);

int main(void) {
    int n;
    
    for (int i = 1; i <= 5; i++) {
        printf("What triangular number do you want?\n");
        scanf("%i", &n);
        printf("Triangular number %i is %i\n\n", n, calculateTriangularNumber(n));
    }

    return 0;
}

int calculateTriangularNumber (int n) {
    int triangularNumber = 0;

    for (int i = 0; i <= n; i++) {
        triangularNumber += i;
    }

    return triangularNumber;
}
