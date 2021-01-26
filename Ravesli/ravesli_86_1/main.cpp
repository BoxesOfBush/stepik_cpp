#include <iostream>
#include <string>
#include <algorithm>

void sort(std::string *array, int lenght){
    for(int startIndex = 0; startIndex < lenght; ++startIndex){
        int smallestIndex = startIndex;
        for(int currentIndex = startIndex + 1; currentIndex < lenght; ++currentIndex){
            if(array[currentIndex] < array[smallestIndex]){
                smallestIndex = currentIndex;
            }
        }
        swap(array[startIndex], array[smallestIndex]);
    }
}

int main(){
    std::cout << "How many names would you like to enter? ";
    int lenght;
    std::cin >> lenght;

    std::string *names = new std::string[lenght];

    for(int i = 0; i < lenght; ++i){
        std::cout << "Enter name # " << i + 1 << ": ";
        std::cin >> names[i];
    }

    sort(names, lenght);

    std::cout << "Here is your sorted list : " << "\n";

    for (int i = 0; i < lenght; ++i){
        std::cout << "Name # " << i + 1 << ":" <<  names[i] << "\n";
    }

    delete [] names;
    names = nullptr;

}
