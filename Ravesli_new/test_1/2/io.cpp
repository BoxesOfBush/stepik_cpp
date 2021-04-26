#include <iostream>

int readNumber(){
    int x = 0;
    std::cout << "Enter your number: ";
    std::cin >> x;
    return x;
}

void writeAnswer(int x){
    std::cout << "The answer is: " << x << std::endl;
}
