/* Write a program that asls the user to enter the
initial velocity and acceleration of an object,
and the time that has elapsed, and prints the final
velocity v, and distance traversed s.*/

#include <stdio.h>

int main(void) {

    // Define memory space for the variables. 
    int initialVelocity = 0;
    int initialAcceleration = 0;
    int elapsedTime = 0;
    int finalVelocity = 0;
    int distanceTraversed = 0;

    printf("Enter the initial velocity: ");
    scanf("%d", &initialVelocity);

    printf("Enter the initial acceleration: ");
    scanf("%d", &initialAcceleration);

    printf("Enter the elapsed time: ");
    scanf("%d", &elapsedTime);

    finalVelocity = initialVelocity + (initialAcceleration * elapsedTime);
    distanceTraversed = (initialVelocity * elapsedTime) + ((0.5) * initialAcceleration * elapsedTime * elapsedTime);

    printf("The final velocity of the object is: %d\n", finalVelocity);
    printf("The distance traversed by the object is: %d\n", distanceTraversed);

}