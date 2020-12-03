#include <iostream>
int min(int a, int b) {
    if (a < b) {
        return a;
    }
    else return b;
}

int main() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    std::cout << min(min(a,b), min(c,d));
}
