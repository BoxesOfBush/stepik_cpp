#include <iostream>

bool isEven(int x){
    return(x % 2) == 0;
}



int main(){

    std::cout << "Enter the number: ";
    int x;
    std::cin >> x;
    if(isEven(x)){
        std::cout << "Number " << x << "is even\n";
    }
    else{
        std::cout << "Number " << x << "is not even\n";
    }
}
