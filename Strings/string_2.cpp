#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;
    std::string s2 = "";
    for ( auto c : s ) {
        if ( c >= 'a' && c <= 'z' ) {
            int temp = c - 'a';
            s2 = 'A' + temp;
        }
        else {
            s2 += c;
        }
        std::cout << s2;
    }
}
