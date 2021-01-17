#include <iostream>

int main(){
    char myAZchar = 'a';
    while (myAZchar <= 'z'){
        std::cout << myAZchar  << " " << static_cast<int>(myAZchar) << "\n";
        ++myAZchar;
    }
}
