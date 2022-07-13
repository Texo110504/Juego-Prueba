#ifndef PLAYER_H
#define PLAYER_H

#include "Player.h"

class Player
{
public:
    Player();

    void CallInput();

private:

protected:
    int x, y;

};

#include "Player.cpp"

#endif