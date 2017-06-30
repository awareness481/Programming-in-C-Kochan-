/* 4.
 . If you take the value of N as computed in exercise 2, subtract 621,049 from it, and then take that result modulo 7, you get a number from 0 to 6 that represents the day of the week (Sunday through Saturday, respectively) on which the particular day falls. For example, the value of N computed for August 8, 2004, is 732,239 as derived previously. 732,239 − 621,049 gives 111,190, and 111,190 % 7 gives 2, indicating that this date falls on a Tuesday.
Use the functions developed in the previous exercise to develop a program that displays the day of the week on which a particular date falls. Make certain that the program displays the day of the week in English (such as “Monday”).*/

#include <stdio.h>

struct date {
    int year;
    int month;
    int days;
};

void giveDay(struct date a);
int f(int y, int m);
int g(int m);

int main(void) {
    printf("Provide a date (mm dd yyyy)\n");

    struct date dateInput;

    scanf("%i%i%i", &dateInput.month, &dateInput.days, &dateInput.year);

    giveDay(dateInput);

    return 0;
}

void giveDay(struct date a) {
    
    const int N = ((1461 * f(a.year, a.month) / 4 + 153 * g(a.month) / 5 + a.days) - 621049) % 7;
    const char *day[7] = {"Sunday", "Monday", "Tuesday", "Wedsnesday", "Thursday", "Friday", "Saturday"};

    printf("The day of the week is %s\n", day[N]);

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
