#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    printf("Provide the max value\n");
    int size;
    
    scanf("%i", &size);
    if (size < 2) return 1;

    int *P = (int*)calloc(size,  sizeof(int));
    

    for (int i = 2; i <= size; i++) {
        if (P[i] == 1) continue;

        for (int j = 2; i*j <= size; j++) {
            P[i*j] = 1;
        }
       
    }
    
    for (int i = 2; i < size; i++) {
        if(P[i] == 0) printf("%i\n", i);
    }
    return 0;
}


