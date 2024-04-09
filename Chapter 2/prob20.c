/* Write a program that asks the user to enter the total time elapsed, in
seconds, and convert the time to hours, minutes and seconds. Display
it in a format of hours:minutes:seconds. */

#include <stdio.h>

int main(void) {

    int userInput = 0;

    int Hours = 0;
    int Minutes = 0;
    int Seconds = 0;

    printf("Enter the seconds elapsed: ");
    scanf("%d", &userInput);

    Hours = userInput / 3600;
    Minutes = (userInput - (3600 * Hours)) / 60;
    Seconds = userInput % 60;

    printf("The total time elapsed is: %d:%d:%d",Hours, Minutes, Seconds);

}