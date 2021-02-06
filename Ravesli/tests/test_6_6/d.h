#ifndef D_H
#define D_H
#include <iostream>
#include <array>
#include "a.h"
#include "b.h"
#include "c.h"

void deck(){
    std::array <Card, 52> deck;
    int card_index = 0;
    for(int suit = 0; suit < MAX_SUITS; ++suit){
        for(int rank = 0; rank < MAX_RANKS; ++rank){
            deck[card_index].suit = static_cast<CardSuit>(suit);
            deck[card_index].rank = static_cast<CardRank>(rank);
            ++card_index;
        }
    }
}

#endif // D_H
