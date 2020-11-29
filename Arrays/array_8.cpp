#include <iostream>
int main() {
    int n, m;//n - рядки , m - стовпці
    std::cin >> n >> m;
    int a[n][m];
    //зчитування
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> a[i][j];
        }
    }
    //обробка
    int k;
    std::cin >> k;
    int round = 0;
    for (int i = 0; i < n; i++) {
        int temp = 0;
        for (int j = 0; j < m; j++) {
            if ( a[i][j] == 0 ) {
                temp++;
                if(temp == k) {
                    round = i + 1;
                    break;
                }
            }
            else temp = 0;
        }
        if (temp == k) break;
    }
    std::cout << round;
    return 0;
}
