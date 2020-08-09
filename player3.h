#ifndef player3_H
#define player3_H

#include <player.h>

#include "map.h"
class player3 : public player
{
    public:
        player3();
        player3(int,int,map&);
        void move(map&);
};


#endif // player3_H