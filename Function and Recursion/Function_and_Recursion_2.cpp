#include <iostream>
#include <cmath>
double distance(double x1, double y1, double x2, double y2) {
    double res;
    res = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return res;
}

int main() {
    double a, b, c, d;
    std::cin >> a >> b >> c >> d;
    std::cout <<distance(a,b,c,d) ;
}
