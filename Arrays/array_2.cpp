#include <iostream>
int main() {
    int n;
    std::cin >> n;
    int a[15][15];
    //обробка
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // i == j - головна діагональ
            // i == n - 1 - j - побічна діагональ
            // i == n / 2 - центральна горизонталь
            // j == n / 2 - центральна вертикаль
            if (i == j || i == n - 1 - j || i == n / 2 || j == n / 2) a[i][j] = 1;
            else a[i][j] = 0;
        }
    }
    //вивід
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 0) std::cout << "." << " ";
            else std::cout << "*" << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
