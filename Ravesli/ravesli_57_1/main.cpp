#include <iostream>
#include <string>

int main(){
    std::cout << "Enter your full name: ";
    std::string myName;
    std::getline(std::cin, myName);

    std::cout << "Enter your age: ";
    int myAge;
    std::cin >> myAge;

    std::cout << "You've lived " << myAge/static_cast<double>(myName.length()) << " years for each letter in your name." << std::endl;
}
