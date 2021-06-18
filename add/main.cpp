#include <iostream>


int add(int &a, int &b)
{
    return a+b;
}


int main()
{
    int a = 5;
    int b = 6;
    std::cout << "Sum of " << a << " + " << b << " = " << add(a,b) << std::endl;

}
