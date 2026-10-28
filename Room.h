#include <iostream>
#include "Player.h"

//The map has a wall of # characters all the way around its edge. More # characters are distributed around the inside of the map, and they act as walls too.
//The @ starts on an open space. After each move, the program draws the whole map again with the @ in its new place.
#ifndef ROOM_H
#define ROOM_H

class Player;
class Room{
    private:

    Player * player;

    int width;
    int height;
    char ** map;

    public:

        Room(int x, int y,Player*player);
        ~Room();
        void draw();
        //char tileAt(int x, int y);
        bool canMove(int x, int y);    
};
#endif