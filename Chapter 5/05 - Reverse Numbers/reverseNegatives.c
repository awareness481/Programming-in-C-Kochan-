#include <stdio.h>
 
int main ()
{
 int number, right_digit;
 
 printf ("Enter your number.\n");
 scanf ("%i", &number);

 do {
 if (number < 0) {
     number = number * -1;
     printf("-");
 }

 right_digit = number % 10;
 printf ("%i", right_digit);
 number = number / 10;
 } 
 while ( number != 0 );
 printf("\n");
 return 0;
}
