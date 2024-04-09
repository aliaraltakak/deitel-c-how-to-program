/* Write a program that inputs three different numbers from the user. Display the numbers in increasing order.*/

#include <stdio.h>

int main(void) {

    int firstInt = 0;
    printf("Enter the first integer: \n");
    scanf("%d", &firstInt);

    int secondInt = 0;
    printf("Enter the second integer: \n");
    scanf("%d", &secondInt);

    int thirdInt = 0;
    printf("Enter the third integer: \n");
    scanf("%d", &thirdInt);

    int leastInt = 0;
    int midInt = 0;
    int largestInt = 0;

    if (firstInt <= secondInt && firstInt <= thirdInt) {

        if (secondInt <= thirdInt) {
            leastInt = firstInt;
            midInt = secondInt;
            largestInt = thirdInt;
        }

        else if (thirdInt <= secondInt) {
            leastInt = firstInt;
            midInt = thirdInt;
            largestInt = secondInt;
        }
    }

    else if (secondInt <= firstInt && secondInt <= thirdInt) {

        if (firstInt <= thirdInt) {
            leastInt = secondInt;
            midInt = firstInt;
            largestInt = thirdInt;
        }
    
        else if (thirdInt <= secondInt) {
            leastInt = secondInt;
            midInt = thirdInt;
            largestInt = firstInt;
        }
    }
    
    else if (thirdInt <= firstInt && thirdInt <= secondInt) {

        if (firstInt <= secondInt) {
            leastInt = thirdInt;
            midInt = firstInt;
            largestInt = secondInt;
        }

        else if (secondInt <= firstInt) {
            leastInt = thirdInt;
            midInt = secondInt;
            largestInt = firstInt;
        }
    
    }
    
    printf("The integers are listed in ascending order as: %d %d %d\n", leastInt, midInt, largestInt);

    }   