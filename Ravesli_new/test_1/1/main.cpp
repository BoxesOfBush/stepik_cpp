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

int main(){
    int x = readNumber();
    int y = readNumber();
    writeAnswer(x+y);
}
