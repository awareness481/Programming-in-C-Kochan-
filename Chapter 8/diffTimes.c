/*
 3. Write a function elapsed_time that takes as its arguments two time structures and returns a time structure that represents the elapsed time (in hours, minutes, and seconds) between the two times. So the call
elapsed_time (time1, time2)
where time1 represents 3:45:15 and time2 represents 9:44:03, should return a time structure that represents 5 hours, 58 minutes, and 48 seconds. Be careful with times that cross midnight.
*/

#include <stdio.h>
#include <stdlib.h>

struct time {
    int hours;
    int mins;
    int secs;
};


void compare(struct time a, struct time b);


int main(void) {
    
    struct time time1, time2;

    printf("Provide time in (hh mm ss)\n");
    scanf("%i%i%i:", &time1.hours, &time1.mins, &time1.secs);
    printf("Provide time in (hh mm ss)\n");
    scanf("%i%i%i", &time2.hours, &time2.mins, &time2.secs);
    
    compare(time1, time2);

    return 0;
}


void compare(struct time a, struct time b) {

    printf("The difference is %i hours %i minutes and %i seconds\n", abs(a.hours - b.hours), abs(a.mins - b.mins),abs(a.secs - b.secs));
}

