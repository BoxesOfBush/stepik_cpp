#include <iostream>
#include <cmath>
int main() {
    int n;
    bool symmetric;
    std::cin >> n;
    int a[10][10];
    // заполнение
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> a[i][j];
        }
    }
    // обработка
    symmetric = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) symmetric = false;
        }
    }
    // вывод
    if (symmetric) std::cout << "YES";
    else std::cout << "NO";
}
