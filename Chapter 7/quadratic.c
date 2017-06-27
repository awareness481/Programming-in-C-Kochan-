#include <stdio.h>


float disc;

float discriminant(int a, int b, int c);
void quadratic(int b, int a, int c);
float squareRoot(float x);


int main(void) {
    printf("Provide the a, b and c values of your quadratic equation\n");
    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);
    
    disc = discriminant(a , b, c);
    if (disc < 0) {
        printf("The result of your quadratic equation includes imaginary numbers\n");
        return 0;
    }
    
    quadratic(a , b, c); 
    
    return 0;
}

float discriminant(int a, int b, int c) {
    return squareRoot((float)b*b - 4 * a * c);
}

float squareRoot(float x) {
    const float epsilon = 0.00001;

    float guess = 1.0;
    if (x < 0) return -1;

    while((guess * guess - x) >= epsilon) {
        guess = ( x / guess + guess ) / 2.0;
    }

    return guess;
}

void quadratic(int a, int b, int c) {
    float root1 = (-b + disc) / -(2*a);
    float root2;
    if (disc == 0)
        root2 = root1;
    else
      root2 = (-b - disc) / -(2*a);

    printf("The solution to the quadratic is (x%+.2f) * (x%+.2f)\n", root1, root2);
}
