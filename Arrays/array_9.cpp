#include <iostream>
int main() {
    int n, m;
    std::cin >> n >> m;
    int a[1000][1000];
    for ( int i = 0; i < n; i++) {
        for ( int j = 0; j < m; j++) {
            std::cin >> a[i][j];
        }
    }
    for ( int i = 0; i < m; i++) {
        for ( int j = n - 1; j >= 0; j--) {
            std::cout << a[j][i] << " ";
        }
        std::cout << std::endl;
    }
}
