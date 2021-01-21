#include <iostream>

int main(){
    int number;
    do{
        std::cout << "Enter a number  1 - 9: ";
        std::cin >> number;

        if (std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(32767, '\n');}

    } while ( number < 1 || number > 9 );


    int array[] = { 7, 5, 6, 4, 9, 8, 2, 1, 3 };
    const int length = sizeof (array) / sizeof (array[0]);

    for(int index = 0; index <= length; ++index){
        std::cout << array[index] << " ";
    }

    std::cout << "\n";

    for (int index = 0; index <= length; ++index){
        if(array[index] == number){
            std::cout << "You number has index " << index << std::endl;
            break;
        }
    }
}
