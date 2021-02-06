#ifndef C_H
#define C_H
#include "a.h"
#include "b.h"
#include <iostream>

void printCard(const Card &card){
    switch (card.rank) {
    case RANK_2:      std::cout << "2"; break;
    case RANK_3:      std::cout << "3"; break;
    case RANK_4:      std::cout << "4"; break;
    case RANK_5:      std::cout << "5"; break;
    case RANK_6:      std::cout << "6"; break;
    case RANK_7:      std::cout << "7"; break;
    case RANK_8:      std::cout << "8"; break;
    case RANK_9:      std::cout << "9"; break;
    case RANK_10:     std::cout << "10"; break;
    case RANK_VALET:  std::cout << "V"; break;
    case RANK_DAMA:   std::cout << "D"; break;
    case RANK_KOROL:  std::cout << "K"; break;
    case RANK_TYZ:    std::cout << "T"; break;
    default:
        std::cout << "UNKNOWN";
        break;
    }

    switch (card.suit) {
    case SUIT_TREFU:   std::cout << "TR"; break;
    case SUIT_BYBNU:   std::cout << "B"; break;
    case SUIT_CHERVU:  std::cout << "CH"; break;
    case SUIT_PIKI:    std::cout << "P"; break;
    default:
        std::cout << "UNKNOWN";
        break;
    }
}

#endif // C_H
