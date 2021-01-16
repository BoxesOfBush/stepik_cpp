#include <iostream>
#include <string>

enum class Animal{
    ANIMAL_PIG,
    ANIMAL_CHICKEN,
    ANIMAL_GOAT,
    ANIMAL_CAT,
    ANIMAL_DOG,
    ANIMAL_OSTRICH,
};

std::string getAnimalName(Animal animal){
    switch (animal) {
    case Animal::ANIMAL_PIG:
        return "pig";
    case Animal::ANIMAL_CHICKEN:
        return "chicken";
    case Animal::ANIMAL_GOAT:
        return "goat";
    case Animal::ANIMAL_CAT:
        return "cat";
    case Animal::ANIMAL_DOG:
        return "dog";
    case Animal::ANIMAL_OSTRICH:
        return "ostrich";
    default:
        std::cout << "Unreal name of animal!!!";
        return 0;
    }
}

void printNumberOfLegs(Animal animal){
    std::cout << "A " << getAnimalName(animal) << " has ";
    switch (animal){
    case Animal::ANIMAL_PIG:
    case Animal::ANIMAL_GOAT:
    case Animal::ANIMAL_CAT:
    case Animal::ANIMAL_DOG:
        std::cout << "4";
        break;
    case Animal::ANIMAL_CHICKEN:
    case Animal::ANIMAL_OSTRICH:
        std::cout << "2";
        break;
    default:
        std::cout << "Error of enumerator";
        break;
    }
    std::cout << " legs" << std::endl;
}

int main(){
    printNumberOfLegs(Animal::ANIMAL_CAT);
    printNumberOfLegs(Animal::ANIMAL_CHICKEN);
}
