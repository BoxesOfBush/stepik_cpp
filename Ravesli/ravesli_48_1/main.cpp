#include <iostream>
#include <windows.h>
int getNumber(){
    int x;
    std::cin >> x;
    return x;
}


int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int smaller;
    std::cout << "Введите число: ";
    smaller = getNumber();

    int larger;
    std::cout << "Введите большее число: ";
    larger = getNumber();
    if(smaller > larger){
        int temp = smaller;
        smaller = larger;
        larger = temp;

        std::cout << "Меняем значения местами" << std::endl;
        std::cout << "Меньшее число: " << smaller << std::endl;
        std::cout << "Большее число: " << larger << std::endl;
    }
    else{
        std::cout << "Меньшее число: " << smaller << std::endl;
        std::cout << "Большее число: " << larger << std::endl;
    }
}
