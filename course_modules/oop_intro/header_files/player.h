//
// Created by Administrator on 08/06/2026.
//

#pragma once
#include <iostream>

class Player
{
private:
    int m_value;
    std::string m_name;

public:
    Player(int value, std::string name);

    void GetValue();

    void SetValue(int value);
};