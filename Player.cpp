#include "Room.h"
#include "Player.h"
#include <iostream>

using namespace std;

Player::Player(){
    this->x = 3;
    this->y = 3;
}

Player::~Player(){


}

int Player::getx(){
    return x;
}
int Player::gety(){
    return y;
}

bool Player::move(char direction, Room*room){

    if(direction == 'w'){
        //(*room).canMove(this->x, this->y -1);
       if( room->canMove(this->x, this->y-1)){
        this->y -= 1;
        return true;
       }


    } else if(direction == 'a') {
        if( room->canMove(this->x-1, this->y)){
        this->x -= 1;
        return true;
    }


    } else if(direction == 's') {
        if( room->canMove(this->x, this->y+1)){
        this->y += 1;
        return true;
    }


    
    } else if(direction == 'd') {
        if( room->canMove(this->x+1, this->y)){
        this->x += 1;
        return true;
    }



    }
    return false;

}
