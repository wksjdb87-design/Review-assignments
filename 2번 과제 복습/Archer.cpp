#include <iostream>
#include <string>
#include "Archer.h"
#include "Monster.h"

Archer::Archer(const std::string& nickname) : Player(nickname)
{
    job_name = "Archer";
    accuracy = 80;
}

void Archer::attack(Monster* monster)
{
	int damage = (getPower() - monster->getDefence()) / 3;

	if (damage < 0)
	{
		for (int i = 1; i <= 3; i++)
		{
			damage = 1;
			cout << nickname << "의 강력한 원거리 공격!\n";
			cout << "몬스터가" << damage << "만큼 데미지를 받았습니다" << endl;
			monster->setHP(monster->getHP() - damage);
		}
	}
	if (damage > 0)
	{
		for (int i = 1; i <= 3; i++)
		{
			cout << nickname << "의 강력한 원거리 공격!\n";
			cout << "몬스터가 [" << damage << "] 만큼 데미지를 받았습니다" << endl;
			monster->setHP(monster->getHP() - damage);
		}
	}

	cout << "몬스터의 남은 체력 [" << monster->getHP() << "]" << endl;
}