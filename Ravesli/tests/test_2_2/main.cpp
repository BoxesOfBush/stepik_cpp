#include <iostream>
#include "constants.h"

int heigh_of_tower(){
    std::cout << "Enter the initial height of the tower in meters: ";
    double initialHeight;
    std::cin >> initialHeight;
    return initialHeight;
}

double calculateHeight(double initialHeight, double seconds){
    double fallen_distance = (myConstants::gravity * seconds * seconds)/2;
    double currentHeight = initialHeight - fallen_distance;
    return currentHeight;
}

void printHeight(double height, double seconds){
    if(height > 0){
        std::cout << "At " << seconds << " seconds, the ball is at height: " << height << std::endl;
    }
    else {
        std::cout << "At " << seconds << " seconds, the ball is on the ground." << std::endl;
    }
}

void calculate_and_print(double initialHeight, double seconds){
    double height = calculateHeight(initialHeight, seconds);
    printHeight(height, seconds);
}

int main(){
    const double initialHeight = heigh_of_tower();
    calculate_and_print(initialHeight, 0);
    calculate_and_print(initialHeight, 1);
    calculate_and_print(initialHeight, 2);
    calculate_and_print(initialHeight, 3);
    calculate_and_print(initialHeight, 4);
    calculate_and_print(initialHeight, 5);
}
