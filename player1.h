#ifndef player1_H
#define player1_H

#include "player.h"

#include "map.h"


class player1 : public player
{
    public:
        player1();//constructorul nul
        player1(int,int,map&);//constructorul cu parametrii
        void move(map&);//functia de mutare
};


#endif // player1_H