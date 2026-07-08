//
// Created by Administrator on 08/06/2026.
//

#include "player.h"

Player::Player(int value, std::string name) : m_value(value), m_name(name) {}

void Player::GetValue()
{
    std::cout << m_value << std::endl;
}

void Player::SetValue(int value)
{
    m_value = value;
}