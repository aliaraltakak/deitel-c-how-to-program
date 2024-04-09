/* Write a program that reads two integers from the user
then displays their sum, product, difference, quoitent
and remainder. */

#include <stdio.h>

int main(void) {

    int userInput1 = 0; // Define memory space for the first integer.
    int userInput2 = 0; // Define memory space for the second integer.

    printf("Enter two integers: ");
    scanf("%d %d", &userInput1, &userInput2);

    int integerSum = 0; // Define memory space for the sum of the integers.
    integerSum = userInput1 + userInput2; // Addition.

    int integerDiff = 0; // Define memory space for the difference of the integers.
    integerDiff = userInput1 - userInput2; // Subtraction.

    int integerProduct = 0; // Define memory space for the product of the integers.
    integerProduct = userInput1 * userInput2; // Multiplication.

    int integerQuoitent = 0; // Define memory space for the division of the integers.
    integerQuoitent = userInput1 / userInput2; // Division.

    int integerRemainder = 0; // Define memory space for the remainder of the integers.
    integerRemainder = userInput1 % userInput2; // Modulo.

    
    printf("The sum of the two integers is: %d\n", integerSum);
    printf("The difference of the two integers is: %d\n", integerDiff);
    printf("The product of the two integers is: %d\n", integerProduct);
    printf("The quoitent of the two integers is: %d\n", integerQuoitent);
    printf("The modulo of the two integers is: %d\n", integerRemainder);
}