#ifndef H_H
#define H_H
#include "a.h"
#include "b.h"
#include "c.h"
#include "d.h"
#include "e.h"
#include "f.h"
int getCardValue(const Card &card)
{
    switch (card.rank)
    {
    case RANK_2:		return 2;
    case RANK_3:		return 3;
    case RANK_4:		return 4;
    case RANK_5:		return 5;
    case RANK_6:		return 6;
    case RANK_7:		return 7;
    case RANK_8:		return 8;
    case RANK_9:		return 9;
    case RANK_10:		return 10;
    case RANK_VALET:	return 10;
    case RANK_DAMA:	    return 10;
    case RANK_KOROL:	return 10;
    case RANK_TYZ:		return 11;
    default: break;
    }

    return 0;
}

#endif // H_H
