#include <iostream>
#include <cmath>
#include <iomanip>
double power(double a, int n) {
    double p;
    if (n == 0) p = 1;
    else if (n == 1) p = a;
    else if (n > 1) {
        p = a;
        for (int i = 2; i <= n; i++) p = p * a;
    }
    else if (n < 0) {
        p = a;
        for (int i = 2; i <= -n; i++) p = p * a;
        p = 1 / p;
    }
    return p;
}

int main() {
    double  a;
    int n;
    std::cin >> a >> n;
    std::cout << std::fixed << std::setprecision(5);
    std::cout << power(a,n);
}
