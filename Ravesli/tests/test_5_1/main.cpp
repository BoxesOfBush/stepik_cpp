#include <iostream>
#include "constants.h"

int getInitialHeight(){
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

int main()
{
    const double initialHeight = getInitialHeight();
    int seconds = 0;
    double height;
    do{
        height = calculateHeight(initialHeight, seconds);
        printHeight(height, seconds);
        ++seconds;
    }
    while(height > 0.0);
}
