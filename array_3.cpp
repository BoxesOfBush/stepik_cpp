#include <iostream>
int main() {
    int n;
    std::cin >> n;
    int a[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = abs(i - j);
            std::cout << a[i][j]<<" ";
        }
        std::cout << std::endl;
    }
    return 0;
}
