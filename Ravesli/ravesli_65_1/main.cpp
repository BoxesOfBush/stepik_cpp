#include <iostream>
#include <string>

int calculate(int x, int y, char op){
    switch(op){
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    case '%':
        return x % y;
    default:
        std::cout << "An unavailable operation was entered!!!";
        return 0;

    }
}

int main(){
    std::cout << "Enter a first integer: ";
    int x;
    std::cin >> x;

    std::cout << "Enter a second integer: ";
    int y;
    std::cin >>y;

    std::cout << "Enter a mathematic operation: (+, -, *, /, %) ";
    char op;
    std::cin >> op;

    std::cout << x << " " << op << " " << y << " = " << calculate(x, y, op);
}
