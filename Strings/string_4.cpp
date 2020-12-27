#include <iostream>
#include <string>
int main() {
    int i = 0;
    std::string s;
    std::getline(std::cin, s);
    for (auto c : s)
        if (c == ' ') i++;
    std::cout << i + 1;
}
