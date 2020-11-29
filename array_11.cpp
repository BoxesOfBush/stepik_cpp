#include <iostream>
#include <iomanip>
int main () {
    int n, m, i, j;
    std::cin >> n >> m;
    int a[n][m], s = 1;

    // Обробка
    for (i = 0; i < n; i++) {
        // Якщо строка парна, то виводим зліва направо
        if (i % 2 == 0) {
            for (j = 0; j < m; j++) {
                a[i][j] = s;
                s++;
            }
        }
        // Інакше вивід справа наліво
        else {
            for (j = (m-1); j >= 0; j--) {
                a[i][j] = s;
                s++;
            }
        }
    }
    //вивід
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++)
            std::cout << std::setw(4) << a[i][j];
        std::cout << std::endl;
    }
}
