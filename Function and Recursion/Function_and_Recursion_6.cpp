#include <iostream>
#include <cmath>

bool IsPointInArea(double x, double y) {
    double in_circle = 2 * 2 >= abs(x + 1) * abs(x + 1) + abs(y - 1) * abs(y - 1);
    double above_line1 = y >= 2 * x + 2;
    double above_line2 = y >= -x;
    double below_line1 = y <= 2 * x + 2;
    double below_line2 = y <= -x;
    double on_circle = 2 * 2 == abs(x + 1) * abs(x + 1) + abs(y - 1) * abs(y - 1);

    return in_circle && above_line1 && above_line2 || (on_circle || not in_circle) && below_line1 && below_line2;
}

int main() {
    double  x, y;
    std::cin >> x >> y;
    if (IsPointInArea(x, y)) std::cout << "YES";
    else std::cout << "NO";
}
