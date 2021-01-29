#include <iostream>
#include <string>

int main(){
    const std::string names[] = {"Sasha", "Ivan", "John", "Orlando", "Leonardo", "Nina", "Anton", "Molly"};

    std::cout << "Enter the name: " << "\n";
    std::string username;
    std::cin >> username;

    bool found(false);
    for(const auto &name: names){
        if(name == username){
            found = true;
            break;
        }
    }
    if(found){
        std::cout << username << " was found." << "\n";
    }
    else{
        std::cout << username <<" was not found." << "\n";
    }
}
