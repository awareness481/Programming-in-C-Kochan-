/* 5.
 Write a function called clockKeeper() that takes as its argument a dateAndTime structure as defined in this chapter. The function should call the timeUpdate() function, and if the time reaches midnight, the function should call the dateUpdate function to switch over to the next day. Have the function return the updated dateAndTime structure.
*/

#include <stdio.h>


struct dateAndTime {
    int year;
    int month;
    int days;
    int hours;
    int mins;
    int secs;
};


struct dateAndTime clockKeeper(struct dateAndTime a);
void timeUpdate(struct dateAndTime *a);
void dateUpdate(struct dateAndTime *a);
_Bool isLeap(int year);

int main(void) {
    
    printf("Provide the date (mm dd yyyy)\n");

    struct dateAndTime cur;
    scanf("%i%i%i", &cur.month, &cur.days, &cur.year);

    printf("Provide the time (hh mm ss)\n");
    scanf("%i%i%i", &cur.hours, &cur.mins, &cur.secs);
    cur.month--;
    
    if ((cur.month == 0 || cur.month > 12) || cur.year == 0 || (cur.days == 0 || cur.days > 31)) { 
        fprintf(stderr, "Please provide valid values\n");
        return 1;
    }


    struct dateAndTime updated;
    updated = clockKeeper(cur);
    
    const char *months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "June", "July", "Aug", "Sep", "Oct", "Nov", "Dec"};
    printf("Updated Date & Time: %s/%i/%i, %.2i:%.2i:%.2i\n", months[updated.month], updated.days, updated.year, updated.hours, updated.mins, updated.secs);

    return 0;
}

struct dateAndTime clockKeeper(struct dateAndTime a) {
    timeUpdate(&a);
    return a;
}

void timeUpdate(struct dateAndTime *a) {
    a->secs++;
    if (a->secs == 60) {
        a->mins++;
        a->secs = 0;
    }
    if (a->mins == 60) {
        a->hours++;
        a->mins = 0;
    }
    if (a->hours == 24) {
        a->mins = a->hours = a->secs = 0;
        dateUpdate(a);
    }
}

void dateUpdate(struct dateAndTime *a) {
    a->days++;
    
    const int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};    
    
    if (a->month == 2 && isLeap(a->year) && a->days == 29) {
            return;
    }

    if (a->days > months[a->month]) {

       if (a->month == 11) {
            a->year++;
            a->month = 0;
            a->days = 1;
       } else {
            a->month++;
            a->days = 1;
       }
    }

}


_Bool isLeap(int year) {
    if (( year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return 1;
    return 0;
}
