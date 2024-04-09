/* Write a program that asks the user to enter the highest rainfall ever recorded in 
one season for a country, and the rainfall in the current year for that country,
obtains the values from the user, checks if the current rainfall exceeds the highest
rainfall, and prints an appropriate message on the screen. If the current rainfall is 
higher, it assigns that value as the highest rainfall ever. Use only the single-selection
form of the if-statement.*/

#include <stdio.h>

int main(void) {

    // Define memory locations for variables. 
    int highestRainfall = 0;
    int currentRainfall = 0;

    printf("Enter the highest rainfall ever: ");
    scanf("%d", &highestRainfall);

    printf("Enter the current rainfall: ");
    scanf("%d", &currentRainfall);

    if (highestRainfall > currentRainfall) {
        printf("Current rainfall is %d, while highest rainfall is %d", highestRainfall, currentRainfall);
    }
    
    if (highestRainfall == currentRainfall) {
        printf("Current rainfall is equal to the highest ever recorded!");
    }

    if (highestRainfall < currentRainfall) {
        printf("Current rainfall surpassed the highest ever recorded!");
        highestRainfall = currentRainfall;
    }
}