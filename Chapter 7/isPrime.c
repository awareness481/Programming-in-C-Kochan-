#include <stdio.h>
#include <stdlib.h>

int isPrime(int n);

int main(void) {
    printf("Provide a value to check\n");
    int isP;
    scanf("%i", &isP);
    
    int res = isPrime(isP);
    if (res == 1)
        printf("%i is a prime number\n", isP);
    else
        printf("%i is not a prime number\n", isP);

    return 0;
}

int isPrime(int n) {
    if (n < 2)
        return 0;
    int *P = (int*)calloc(n,  sizeof(int));


    for (int i = 2; i <= n; i++) {
        if (P[i] == 1) continue;

        for (int j = 2; i*j <= n; j++) {
            P[i*j] = 1;
        }

    }

    if (P[n] == 0)
        return 1;
    return 0;
}
