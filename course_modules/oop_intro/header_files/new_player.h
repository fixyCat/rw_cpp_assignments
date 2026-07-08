//
// Created by Administrator on 09/06/2026.
//

#pragma once
#include "player.h"

class NewPlayer: public Player
{
private:
    float newPlayerTest;
public:
    NewPlayer(int value, std::string name, float newPlayerTest) : Player(value, name), newPlayerTest(newPlayerTest) {}
};