#include <iostream>

bool isPrime(int x){
    if(x == 2){
        return true;
    }
    if(x == 3){
        return true;
    }
    if(x == 5){
        return true;
    }
    if(x == 7){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    std::cout<<"Enter an integer more than 0 and less than 10: ";
    int a;
    std::cin>>a;

    bool prime = isPrime(a);
    if(a > 10 || a < 0){
        std::cout<<"not valid digit";
        return 0;
    }
    if(prime){
        std::cout<<"The digit is prime";
    }
    else{
        std::cout<<"The digit is not prime";
    }
}
