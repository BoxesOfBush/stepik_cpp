#include <iostream>

int comparation(int x, int pow){
    if(x >= pow){
        std::cout << "1";
    }
    else{
        std::cout << "0";
    }


    if(x >= pow){
        return x - pow;
    }
    else{
        return x;
    }

}


int main(){
    std::cout << "Enter a number: ";
    int x;
    std::cin >> x;

    x = comparation(x, 128);
    x = comparation(x, 64);
    x = comparation(x, 32);
    x = comparation(x, 16);

    std::cout << " ";

    x = comparation(x, 8);
    x = comparation(x, 4);
    x = comparation(x, 2);
    x = comparation(x, 1);
}
