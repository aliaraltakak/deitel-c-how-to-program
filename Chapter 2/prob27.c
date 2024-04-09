/* Write a program that inputs one 4-digit number, sums each
of the individual digits, and displays the results. */

#include <stdio.h>

int main(void) {

    int userInput = 0;

    int firstDec = 0;
    int secondDec = 0;
    int thirdDec = 0;
    int fourthDec = 0;
    
    int outputSum = 0;

    printf("Enter a 4-digit number: ");
    scanf("%d", &userInput);

    firstDec = userInput / 1000;
    secondDec = (userInput - firstDec * 1000) / 100;
    thirdDec = (userInput  - firstDec * 1000 - secondDec * 100) / 10;
    fourthDec = userInput - firstDec * 1000 - secondDec * 100 - thirdDec * 10;

    outputSum = firstDec + secondDec + thirdDec + fourthDec;

    printf("The sum of all digits is: %d", outputSum);
}