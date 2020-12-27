#include <iostream>
#include <string>

int main() {
    std::string s;
    std::getline(std::cin, s);
    for ( auto c : s) {
        if ( c >= '0' && c <= '9'){
            std::cout << "yes";
        }
        else std::cout << "no";
    }
}
