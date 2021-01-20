#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

int getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

bool playGame(int guesses, int number){
    for(int count = 1; count <= guesses; ++count){
        std::cout <<"Guess #" << count << ": ";
        int guess;
        std::cin >> guess;

        if(guess > number){
            std::cout << "Your number is too high!" << std::endl;
        }
        else if (guess < number){
            std::cout << "Your number is too low!" << std::endl;
        }
        else{
            return true;
        }
    }
    return false;
}


bool playAgain(){
    std::string ch;
    do {
        std::cout << "Do you want play again? Please enter the (yes/no);" << std::endl;
        std::cin >> ch;
    } while (ch != "yes" && ch != "no");
    return (ch == "yes");
}

int main(){
    srand(static_cast<unsigned int>(time(0)));
    rand();

    const int guesses = 7;

    do{
        std::cout << "Let's play a game. I'm thinking of a number. You have 7 tries to guess what it is." << std::endl;

        int number = getRandomNumber(1, 100);
        bool won = playGame(guesses, number);
        if(won){
            std::cout << "Correct! You win!" << std::endl;
        }
        else{
            std::cout << "Sorry, you lose. The correct number was " << number << "." << std::endl;
        }
    } while(playAgain());
}
