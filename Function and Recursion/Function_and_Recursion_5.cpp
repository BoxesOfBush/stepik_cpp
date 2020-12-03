#include <iostream>
#include <math.h>

bool IsPointInCircl(double x, double y, double xc, double yc, double r) {
    return (pow(y - yc, 2) + pow(x - xc, 2) <= pow(r,2));
}

int main() {
    double  x, y, xc, yc, r;
    std::cin >> x >> y >> xc >> yc >> r;
    if (IsPointInCircl(x, y, xc, yc, r)) {
        std::cout << "YES";
    }
    else
        std::cout << "NO";
    return 0;
}
