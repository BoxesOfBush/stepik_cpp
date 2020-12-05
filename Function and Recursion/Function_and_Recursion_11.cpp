#include <iostream>
int sum(){
    int n;
    std::cin >> n;
    if( n == 0) return 0;
    return  n + sum() ;
}
int main(){
    std::cout << sum();
}
