#include <iostream>
#include "constants.h"

double getInitialHigh(){
    std::cout << "Enter the initial height of the tower in meters: ";
    double initialHeight {0};
    std::cin >> initialHeight;
    return initialHeight;
}

double calcHeight(double initialHeight, int seconds){
    double fallen = (myConstants::gravity*seconds*seconds)/2;
    double currentHeight = initialHeight - fallen;
    return currentHeight;
}

void printHeight(double height, int seconds){
    if (height > 0.0)
        std::cout << "At " << seconds << " seconds, the ball is at height: " << height << " meters\n";
    else
        std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}

void print(double initiaHeight, int seconds){
    double height = calcHeight(initiaHeight, seconds);
    printHeight(height, seconds);

}
int main(){
    const double initialHeight = getInitialHigh();
    print(initialHeight, 0);
    print(initialHeight, 1);
    print(initialHeight, 2);
    print(initialHeight, 3);
    print(initialHeight, 4);
    print(initialHeight, 5);
}
