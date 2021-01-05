#include <iostream>
#include <windows.h>

int doubleNumber(int a){
    return a*2;
}

int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int a;
    std::cout<<"Введіть ваше число а: ";
    std::cin>>a;
    std::cout<<"Результат: а*2 = "<<doubleNumber(a);
}
