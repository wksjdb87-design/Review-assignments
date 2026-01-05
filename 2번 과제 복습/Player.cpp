#include <iostream>
#include "Player.h"
#include "Monster.h"

Player::Player(const std::string& nickname) :
    nickname(nickname), level(1), HP(50), MP(50), power(20), defence(50), accuracy(50), speed(50) {}

int Player::getDefence()
{
    return defence;
}

int Player::getPower()
{
    return power;
}

int Player::getHP()
{
    return HP;
}

void Player::setHP(int _hp)
{
    HP = _hp;
}

void attack(Monster* monster)
{
	cout << "무기를 휘두릅니다" << endl;
}

void Player::printPlayerStatus() {
    cout << "------------------------------------" << endl;
    cout << "* 현재 능력치" << endl;
    cout << "직업" << job_name << endl;
    cout << "닉네임: " << nickname << endl;
    cout << "Lv. " << level << endl;
    cout << "HP: " << HP << endl;
    cout << "MP: " << MP << endl;
    cout << "공격력: " << power << endl;
    cout << "방어력: " << defence << endl;
    cout << "정확도: " << accuracy << endl;
    cout << "속도: " << speed << endl;
    cout << "------------------------------------" << endl;
}