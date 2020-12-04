#include <iostream>
#include <iomanip>
double power(double a, int n) {
    if (n == 0) return 1;
    if (n % 2 == 0) return power(a*a, n/2);
    return a * power(a, n - 1);
}

int main() {
    double  a;
    int n;
    std::cin >> a >> n;
    std::cout << std::fixed << std::setprecision(5);
    std::cout << power(a,n);
    return 0;
}
