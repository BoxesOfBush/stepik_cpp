#include <iostream>
int main() {
    int n, k;
    std::cin >> n;
    int a[100][100];
    // зчитування
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> a[i][j];
        }
    }
    // обробка та вивід
    std::cin >> k;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            if (i - j - k == 0)
                std::cout << a[i][j] << " ";
        }
    }
    return 0;
}
