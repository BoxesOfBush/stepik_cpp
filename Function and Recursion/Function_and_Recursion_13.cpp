#include <iostream>
int MinNumberOfTry(int level) {
    if (level < 3) { return 1; }
    else { return MinNumberOfTry(level - MinNumberOfTry(level - 1)) + 1; }
}
int main() {
    int a;
    std::cin >> a;
    std::cout << MinNumberOfTry(a);
}
