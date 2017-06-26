/*
Write a program that acts as a simple “printing” calculator. The program should allow the user to type in expressions of the form
number operator
The following operators should be recognized by the program:
+ - * / S E
The S operator tells the program to set the “accumulator” to the typed-in number. The E operator tells the program that execution is to end.
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(void) {
    float acc = 0.0;

   while(1) {
   printf("Provide a number and an operator\n");

        float num;
        char c;
        scanf("%f %c", &num, &c);
        
        if (num == 0 && c == '/') {
            printf("You can't divide by zero!\n");
            continue;
        }

        if(isnan(num) == 0 || (c != 'S' &&
                               c != 'E' &&
                               c != '+' &&
                               c != '*' &&
                               c != '-' &&
                               c != '/' ))
        {
           return 1;
        }

        switch(c) {
            case 'E':
               return 0;
               break;
            case 'S':
                acc = num;
                break;
            case '+':
                acc += num;
                break;
            case '-':
                acc -= num;
                break;
            case '*':
                acc *= num;
                break;
            case '/':
                acc /= num;
                break;
        }
        printf("%f\n", acc);
    }

    return 0;
}
