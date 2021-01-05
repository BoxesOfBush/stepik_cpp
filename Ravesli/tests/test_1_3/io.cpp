#include <iostream>

int readNumber(){
    int a;
    std::cout<<"Enter a number: ";
    std::cin>>a;
    return a;

}

void writeAnswer(){
    int a;
    a = readNumber();
    int b;
    b = readNumber();
    std::cout<<"Answer: a + b = "<< a + b;
}
