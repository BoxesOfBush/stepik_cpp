#include <iostream>
#include <cstdlib> // для функций rand() и srand()
#include <ctime> // для функции time()

int getRandomNumber(int min, int max){
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(rand()*fraction*(max-min+1)+min);
}



bool GAME(int guesses, int number){
    for(int i = 0; i <= guesses; ++i){
        std::cout << "Guess #" << i << ": ";
        int player_guess = 0;
        std::cin >> player_guess;
        if (player_guess > number){
            std::cout << "Higher\n";
        }
        else if(player_guess < number){
            std::cout << "Lower\n";
        }
        else{
            std::cout << "Win!!!\n";
            return true;
        }
    }
    std::cout << "The number was: " << number << "\n";
    return false;
}

bool Play_Again(){
    char ch;
    do{
        std::cout << "Do u want play again? Enter (y/n): ";
        std::cin >> ch;
    }while(ch !='y' && ch != 'n');
    return (ch == 'y');
}

int main(){
    srand(static_cast<unsigned int>(time(0)));
    rand();

    const int player_guesses = 7;
    do{
        int number = getRandomNumber(1,100);
        std::cout << "You have 7 tries to guess number!\n";
        GAME(player_guesses, number);
    }while (Play_Again());
    std::cout << "Thank u for the game!!!\n";
}
