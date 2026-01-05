#include "Monster.h"

int Monster::getHP()
{
    return HP;
}

int Monster::getDefence()
{
    return defence;
}

int Monster::getPower()
{
    return power;
}

void Monster::setHP(int _HP)
{
    HP = _HP;

    if (_HP < 0)
    {
        HP = 0;
    }
}

Monster::Monster(string name) : name(name)
{
    HP = 10;
    power = 30;
    defence = 10;
    speed = 10;
};

void Monster::attack(Player* player)
{
    int temp;
    temp = player->getDefence() - getPower();
    player->setHP(player->getHP() - temp);
    cout << name << "가 공격했다" << endl;
    cout << temp << "만큼의 피해를 받았다" << endl;
}