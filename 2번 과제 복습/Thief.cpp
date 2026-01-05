#include <iostream>
#include <string>
#include "Thief.h"
#include "Monster.h"

Thief::Thief(const std::string& nickname) : Player(nickname)
{
    job_name = "Thief";
    speed = 80;
}

void Thief::attack( Monster* monster)
{
	int damage = (getPower() - monster->getDefence()) / 5;

	if (damage < 0)
	{
		for (int i = 1; i <= 5; i++)
		{
			damage = 1;
			cout << nickname << "의 강력한 후방 공격!\n";
			cout << "몬스터가" << damage << "만큼 데미지를 받았습니다" << endl;
			monster->setHP(monster->getHP() - damage);
		}
	}
	if (damage > 0)
	{
		for (int i = 1; i <= 5; i++)
		{
			cout << nickname << "의 강력한 후방 공격!\n";
			cout << "몬스터가 [" << damage << "] 만큼 데미지를 받았습니다" << endl;
			monster->setHP(monster->getHP() - damage);
		}
	}

	cout << "몬스터의 남은 체력 [" << monster->getHP() << "]" << endl;
}