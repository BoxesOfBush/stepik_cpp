#ifndef E_H
#define E_H
#include "a.h"
#include "b.h"
#include "c.h"
#include "d.h"

void printDeck(const std::array <Card, 52> &deck){
    for(const auto &card: deck){
        printCard(card);
        std::cout << " ";
    }
    std::cout << "\n";
}

#endif // E_H
