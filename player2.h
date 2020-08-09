#ifndef player2_H
#define player2_H

#include <player.h>

#include "map.h"

class player2 : public player
{
    public:
        player2();
        player2(int,int,map&);
        void move(map&);
};


#endif // player2_H