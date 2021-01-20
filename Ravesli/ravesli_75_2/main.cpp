#include <iostream>

namespace ANIMALS {
enum ANIMALS{
    chicken,
    lion,
    giraffe,
    elephant,
    duck,
    snake,
    max_size_of_animals,
    };
}

int main(){
    int legs[ANIMALS::max_size_of_animals] = {2,4,4,4,2,0};
    std::cout << "An elephant has " << legs[ANIMALS::elephant] << " legs." << std::endl;
}
