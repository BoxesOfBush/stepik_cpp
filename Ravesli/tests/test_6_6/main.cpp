#include <iostream>
#include <array>
#include <ctime>
#include <cstdlib>
#include "a.h"
#include "b.h"
#include "c.h"
#include "d.h"
#include "e.h"
#include "f.h"
#include "h.h"

int getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

void shuffleDeck(std::array <Card, 52> &deck){
    for(int i = 0; i < 52; ++i){
        int swapIndex = getRandomNumber(0, 51);
        swapCard(deck[i], deck[swapIndex]);
    }
}

int main(){
    srand(static_cast<unsigned int>(time(0)));
    rand();

    std::array<Card, 52> deck;

    int card = 0;
    for (int suit = 0; suit < MAX_SUITS; ++suit)
        for (int rank = 0; rank < MAX_RANKS; ++rank)
        {
            deck[card].suit = static_cast<CardSuit>(suit);
            deck[card].rank = static_cast<CardRank>(rank);
            ++card;
        }

    printDeck(deck);

    shuffleDeck(deck);

    printDeck(deck);

}













