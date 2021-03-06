#include <iostream>
#include <cmath>
int MinDivisor(int n) {
    int min_divisor = 1;
    int sqrt_n = sqrt((double)n);
    for (int i = 2; i <= sqrt_n; i++) {
        if (n % i == 0)
        {
            min_divisor = i;
            break;
        }
    }
    if (min_divisor == 1)
        return n;
    else
        return min_divisor;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << MinDivisor(n);
}
