#include <iostream>
#include <iomanip>


double getDoule(){
    std::cout<< "Enter a double number: ";
    double x = 0;
    std::cin >> x;
    return x;
}

char getOperator(){
    std::cout<< "Enter one of the following: +, -, *, or /: ";
    char op{};
    std::cin >> op;
    return op;
}

void printResult(double x, double y, char op){
    if(op == '+'){
        std::cout <<  x << " + " << y <<  " = " << std::setprecision(20) << x+y << std::endl;
    }
    else if(op == '-'){
        std::cout << x << " - " << y <<  " = " << std::setprecision(20) << x-y << std::endl;
    }
    else if(op == '*'){
        std::cout << x << " * " << y <<  " = " << std::setprecision(20) << x*y << std::endl;
    }
    else if(op == '/'){
        std::cout << x << " / " << y <<  " = " << std::setprecision(20) << x/y << std::endl;
    }
    else{
        std::cout << "Error operation!" << std::endl;
    }
}

int main(){
    double x = getDoule();
    char op  = getOperator();
    double y = getDoule();


    printResult(x, y, op);
}
