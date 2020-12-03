#include <iostream>
#include <math.h>
bool IsPointInSquare(double x, double y) {
    return (abs(x) + abs(y) <= 1);
}
int main() {
    double  x, y;
    std::cin >> x >> y;
    if (IsPointInSquare(x, y)) {
        std::cout << "YES";
    }
    else
        std::cout << "NO";
    return 0;
}
