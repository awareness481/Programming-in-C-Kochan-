/*
 9. The least common multiple (lcm) of two positive integers u and v is the smallest positive integer that is evenly divisible by both u and v. Thus, the lcm of 15 and 10, written lcm (15, 10), is 30 because 30 is the smallest integer divisible by both 15 and 10. Write a function lcm() that takes two integer arguments and returns their lcm. The lcm() function should calculate the least common multiple by calling the gcd() function from Program 7.6
*/

#include <stdio.h>

int gcd(int u, int v);
int lcm(int u, int v);

int main(void) {
    printf("Provide 2 numbers\n");
    int u, v;
    scanf("%i %i", &u, &v);
    if (u*v < 0) return -1;

    int result = lcm(u, v);
    printf("The least common multiple of %i and %i is %i\n", u, v, result);
    
    return 0;
}

int gcd(int u, int v) {
    int temp;
    while (v != 0) {
        temp = u % v;
        u = v;
        v = temp;
    }

    return u;
}

int lcm(int u, int v) {
    return u * v / gcd(u, v);
}

