/* Write a program that inputs three different integers from the keyboard,
then displays their sum, the average, the product, and the smallest and the largest
of these numbers.*/

#include <stdio.h>

int main(void) {

    int firstInt = 0;
    int secondInt = 0;
    int thirdInt = 0;

    int intSum = 0;
    int intMean = 0;
    int intProduct = 0;
    int smallestInt = 0;
    int largestInt = 0;

    printf("Enter three different integers: ");
    scanf("%d %d %d", &firstInt, &secondInt, &thirdInt);

    intSum = firstInt + secondInt + thirdInt;
    intProduct = firstInt * secondInt * thirdInt;
    intMean = intSum / 3;

    if (firstInt <= secondInt && firstInt <= thirdInt) {
        smallestInt = firstInt;
    }

    if (secondInt <= firstInt && secondInt <= thirdInt) {
        smallestInt = secondInt;
    }

    if (thirdInt <= firstInt && thirdInt <= secondInt) {
        smallestInt = thirdInt;
    }

    if (firstInt >= secondInt && firstInt >= thirdInt) {
        largestInt = firstInt;
    }

    if (secondInt >= firstInt && secondInt >= thirdInt) {
        largestInt = secondInt;
    }

    if (thirdInt >= firstInt && thirdInt >= secondInt) {
        largestInt = thirdInt;
    }
    printf("The sum is: %d\n", intSum);
    printf("The mean is: %d\n", intMean);
    printf("The product is: %d\n", intProduct);
    printf("The smallest integer is: %d\n", smallestInt);
    printf("The largest integer is: %d\n", largestInt);


}