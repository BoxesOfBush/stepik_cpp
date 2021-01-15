#include <iostream>

struct FractionsNumber{
    int numerator;
    int denominator;
};

void multiply(FractionsNumber Fraction_1, FractionsNumber Fraction_2){
    std::cout << static_cast<double>(Fraction_1.numerator * Fraction_2.numerator)/(Fraction_1.denominator * Fraction_2.denominator);
}

int main(){
    FractionsNumber Fraction_1;
    std::cout << "Enter a numenator of first number: ";
    std::cin >> Fraction_1.numerator;
    std::cout << "Enter a denominator of first number: ";
    std::cin >> Fraction_1.denominator;

    FractionsNumber Fraction_2;
    std::cout << "Enter a numenator of second number: ";
    std::cin >> Fraction_2.numerator;
    std::cout << "Enter a denominator of second number: ";
    std::cin >> Fraction_2.denominator;
    multiply(Fraction_1, Fraction_2);

}
