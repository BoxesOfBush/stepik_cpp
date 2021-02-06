#include <iostream>

void swap(int &x, int &y){
    int temp = y;
    y = x;
    x = temp;
}

int main(){
    int x = 7;
    int y = 6;
    swap(x, y);
    if (x == 6 && y == 7){
        std::cout << "It works!" << "\n";
    }
    else{
        std::cout << "It's broken" << "\n";
    }
}
