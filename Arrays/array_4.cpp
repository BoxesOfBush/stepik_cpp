#include <iostream>
#include <cmath>
int main() {
    int n, m, x, y, temp;
    std::cin >> n >> m;
    int a[n][m];
    // заповнення
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> a[i][j];
        }
    }
    std::cin >> x >> y;
    // обробка масиву
    for (int i = 0; i < n; i++) {
        temp = a[i][x];
        a[i][x] = a[i][y];
        a[i][y] = temp;
    }
    // вивід
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << a[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
