#include <iostream>
#include <string>
int main()
{
    std::string s;
    std::getline(std::cin, s);
    int l = s.length();
    for (int i = 0; i < l / 2; i++) {
        if (s[i] != s[l - 1 - i]) {
            std::cout << "no" << std::endl;
            return 0;
        }
    }

    std::cout << "yes" << std::endl;
    return 0;
}
