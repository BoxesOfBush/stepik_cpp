#include <iostream>
#include <array>
#include <ctime>
#include <cstdlib>
#include <windows.h>


enum CardSuit{
    CHERV,
    BUBA,
    CHRESTA,
    PIKA,
    MAX_RANGE_SUIT,
};

enum CardRank{
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    VALET,
    DAMA,
    KING,
    TYZ,
    MAX_RANGE_RANK,
};

struct Card{
    CardRank rank;
    CardSuit suit;
};

/*void printCard(const Card &card){
    switch (card.rank) {
    case TWO:    std::cout << "Два" << "\n";
    case THREE:  std::cout << "Три" << "\n";
    case FOUR:   std::cout << "Чотири" << "\n";
    case FIVE:   std::cout << "П'ять" << "\n";
    case SIX:    std::cout << "Шість" << "\n";
    case SEVEN:  std::cout << "Сім" << "\n";
    case EIGHT:  std::cout << "Вісім" << "\n";
    case NINE:   std::cout << "Дев'ять" << "\n";
    case TEN:    std::cout << "Десять" << "\n";
    case VALET:  std::cout << "Валет" << "\n";
    case DAMA:   std::cout << "Дама" << "\n";
    case KING:   std::cout << "Король" << "\n";
    case TYZ:    std::cout << "Туз" << "\n";
    default:     std::cout << "Ранг не визначено" << "\n";
    }

    switch (card.suit) {
    case CHERV:   std::cout << "Черва" << "\n";
    case BUBA:    std::cout << "Буба" << "\n";
    case CHRESTA: std::cout << "Хреста" << "\n";
    case PIKA:    std::cout << "Піка" << "\n";
    default:      std::cout << "Масть не визначено" << "\n";
    }
}

void printDeck(const std::array <Card, 52> &deck){
    for(const auto &card: deck){
        printCard(card);
        std::cout << " ";
    }
    std::cout << "\n";
}
*/

void swapCard(Card &a, Card &b){
    Card temp = a;
    a = b;
    b = temp;
}

int getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

void shuffleCard(std::array <Card, 52> &deck){
    for(int index = 0; index < 52; ++index){
        int swapIndex = getRandomNumber(0, 51);
        swapCard(deck[index], deck[swapIndex]);
    }
}

int getCardValue(const Card &card){
    switch (card.rank) {
    case TWO:    return 2;
    case THREE:  return 3;
    case FOUR:   return 4;
    case FIVE:   return 5;
    case SIX:    return 6;
    case SEVEN:  return 7;
    case EIGHT:  return 8;
    case NINE:   return 9;
    case TEN:    return 10;
    case VALET:  return 10;
    case DAMA:   return 10;
    case KING:   return 10;
    case TYZ:    return 11;
    }
    return 0;
}

char playerChoice(){
    std::cout << "Введіть (h), щоб взяти карту або (s), щоб утриматись" << "\n";
    char choice;
    do{
        std::cin >> choice;

        if(std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(32767, '\n');
        }

    }while (choice != 's' && choice != 'h');
    return choice;
}

bool playBlackjack(const std::array <Card, 52> &deck){
    const Card *CardPtr = &deck[0];

    int playerTotal = 0;
    int dealerTotal = 0;

    dealerTotal += getCardValue(*CardPtr++);
    std::cout << "Диллер має: " << dealerTotal << " очок" << "\n";

    playerTotal += getCardValue(*CardPtr++);
    playerTotal += getCardValue(*CardPtr++);



    while(1){
        std::cout << "Ви маєте: " << playerTotal << " очок" << "\n";

        if(playerTotal > 21){
            return false;
        }

        char choice = playerChoice();
        if(choice == 's'){
            break;
        }
        playerTotal += getCardValue(*CardPtr++);

    }

    while(dealerTotal < 17){
        dealerTotal += getCardValue(*CardPtr++);
        std::cout << "Диллер зараз має " << dealerTotal << " очок" << "\n";
    }

    if(dealerTotal > 21){
        return true;
    }

    return (playerTotal > dealerTotal);
}

bool playAgain(){
    char choice;
    do{
        std::cout << "Ви хочете зіграти ще раз? (y/n): " << "\n\n";
        std::cin >> choice;

        if (choice == 'y'){
            std::cout << "\n" << "Нова гра!" << "\n\n";
            return true;
        }
        if(choice == 'n'){
            std::cout << "\n" << "Гру закінчено!" << "\n\n";
            return false;
        }
    }while (choice != 'n');
    return false;
}


int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    do{
        srand(static_cast<unsigned int>(time(0)));
        rand();

        std::array <Card, 52> deck;
        int card = 0;
        for(int suit = 0; suit < MAX_RANGE_SUIT; ++suit){
            for(int rank = 0; rank < MAX_RANGE_RANK; ++rank){
                deck[card].suit = static_cast<CardSuit>(suit);
                deck[card].rank = static_cast<CardRank>(rank);
                ++card;
            }
        }

        shuffleCard(deck);

        if(playBlackjack(deck)){
            std::cout << "Ти виграв!" << "\n";
        }
        else{
            std::cout << "Ти програв :(" << "\n";
        }
    }while(playAgain());
}
