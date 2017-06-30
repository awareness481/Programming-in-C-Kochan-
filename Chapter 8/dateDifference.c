/* In certain applications, particularly in the financial area, it is often necessary to calculate the number of elapsed days between two dates. For example, the number of days between July 2, 2015, and July 16, 2015, is obviously 14. But how many days are there between August 8, 2014, and February 22, 2015? This calculation requires a bit more thought.
*/

#include <stdio.h>
#include <stdlib.h>



struct date {
           int days;
           int month;
           int year;
       };

void diff(struct date a, struct date b);
int f(int year, int month);
int g(int month);

int main(void) {

    struct date firstDate, secDate;

    printf("Provide the first date (mm dd yyyy)\n");
    scanf("%i%i%i", &firstDate.month, &firstDate.days, &firstDate.year);
    printf("Provide the second date (mm dd yyyy)\n");
    scanf("%i%i%i", &secDate.month, &secDate.days, &secDate.year);
    
    diff(firstDate, secDate);

    return 0;
}

void diff(struct date a, struct date b) {
    const int N = 
        1461 * f(a.year, a.month) / 4 + 153 * g(a.month) / 5 + a.days;
    const int N2 = 
        1461 * f(b.year, b.month) / 4 + 153 * g(b.month) / 5 + b.days;
    printf ("The difference is %i\n", abs( N - N2));
}

int f (int y, int m) {
    if (m <= 2)
        return y - 1;
    return y;
}

int g (int m) {
    if (m <= 2)
        return m + 13;
    return m + 1;
}
