#include <iostream>

void printCstyle(const char *str){
    while(*str != '\0'){
        std::cout << *str;
        ++str;
    }
}

int main(){
    printCstyle("Hello World");
}
