#include <iostream>
#include <iomanip>
int main() {
    int n, m, count = 0;
    std::cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (j % 2 == i % 2) {
                count++;
                std::cout << std::setw(4) << count;
            }
            else std::cout << std::setw(4) << "0";
        }
        std::cout << std::endl;
    }
    return 0;
}
