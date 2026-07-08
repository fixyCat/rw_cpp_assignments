//
// Created by Administrator on 08/06/2026.
//

#include <iostream>

class Player
{
private:
    int m_value;
    std::string m_name;

public:
    Player(int value, std::string name) : m_value(value), m_name(name) {}

    void GetValue()
    {
        std::cout << m_value << std::endl;
    }

    void SetValue(int value)
    {
        m_value = value;
    }
};


class NewPlayer: public Player
{
private:
    float newPlayerTest;
public:
    NewPlayer(int value, std::string name, float newPlayerTest) : Player(value, name), newPlayerTest(newPlayerTest) {}
};


int main()
{
    int val = 10;
    std::string name = "Gabriel";

    NewPlayer player(val, name, 10.0f);
    player.GetValue();
    player.SetValue(20);
    player.GetValue();

    return 0;
}