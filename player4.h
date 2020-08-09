#ifndef player4_H
#define player4_H

#include "player.h"

#include "map.h"


class player4 : public player
{
    public:
        player4();
        player4(int,int,map&);
        void move(map&);
};


#endif // player4_H