#ifndef F_H
#define F_H
#include "a.h"
#include "b.h"
#include "c.h"
#include "d.h"
#include "e.h"

void swapCard(Card &a, Card &b){
    Card temp = a;
    a = b;
    b = temp;
}

#endif // F_H
