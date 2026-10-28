//#include <iostream>
//#include "Room.h"
//w moves up, a left, s down, and d right. The @ never moves onto a #: if the next space is a wall, it stays where it is.
#ifndef PLAYER_H
#define PLAYER_H


class Room;
class Player{
    private:
        int x;
        int y;
        Room*room;

    public:

        Player();
        ~Player();
        int getx();
        int gety();
        bool move(char direction, Room*room);
    
};
#endif