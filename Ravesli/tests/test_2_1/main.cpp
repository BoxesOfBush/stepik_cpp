#include <iostream>
#include <windows.h>

double getDouble(){
    std::cout << "Введіть значення: ";
    double x;
    std::cin >> x;
    return x;
}

int getOperations(){
    std::cout << "Виберіть одну з операцій: +, -, *, or / ";
    char op;
    std::cin >> op;
    return op;
}

void printResult(double x, char op, double y){
    if( op == '+' ){
        std::cout << x << op << y <<" = " << x + y << std::endl;
    }
    else if( op == '-' ){
         std::cout << x << op << y <<" = " << x - y << std::endl;
    }
    else if( op == '*' ){
        std::cout << x << op << y <<" = " << x * y << std::endl;
    }
    else if( op == '/' ){
        std::cout << x << op << y <<" = " << x / y << std::endl;
    }
}

int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    double x = getDouble();
    double y = getDouble();

    char op = getOperations();

    printResult(x, op, y);
}


