//
// Created by Administrator on 08/06/2026.
//
#include "player.h"
#include "new_player.h"


int main()
{
    int val = 10;
    std::string name = "Gabriel";

    NewPlayer player(val, name, 10.0f);
    player.GetValue();
    player.SetValue(200);
    player.GetValue();

    return 0;
}