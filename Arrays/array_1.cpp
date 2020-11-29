#include <iostream>
int main () {
    int n, m;
    std::cin >> n >> m;
    int a[100][100];
    //зчитування
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            std::cin >> a[i][j];
        }
    }
    //обробка
    int max = a[0][0], max_i = 0, max_j = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] > max ){
                max = a[i][j];
                max_i = i;
                max_j = j;
            }
        }
    }
    //вивід
    std::cout << max_i << " " << max_j ;
}
