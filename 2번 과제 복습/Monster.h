#pragma once
#include <iostream>
#include <string>
#include "Player.h"

class Player;

using namespace std;

class Monster {
public:
    Monster(string nickname);
    virtual ~Monster() = default;

    void attack(Player* player);

    string getName();
    int getHP();
    int getPower();
    int getDefence();
    int getSpeed();

    void setName(string name);
    void setHP(int HP);
    void setPower(int power);
    void setDefence(int defence);
    void setSpeed(int speed);

protected:
    string name;
    int HP;
    int power;
    int defence;
    int speed;
};
