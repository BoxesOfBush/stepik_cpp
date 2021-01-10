#include <iostream>

bool isEven(int x){
    return(x % 2) == 0;
}

int getNumberfromUser(){
    std::cout << "Enter the number: ";
    int x;
    std::cin >> x;
    return x;
}

int main(){

    if( int x = getNumberfromUser(); isEven(x) ){
        std::cout << "Number " << x << " is even\n";
    }
    else{
        std::cout << "Number " << x << " is not even\n";
    }
}
