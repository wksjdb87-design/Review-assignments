#include <iostream>
#include <string>
#include "Magician.h"
#include "Monster.h"

Magician::Magician(const std::string& nickname) : Player(nickname)
{
	job_name = "Magician";
	MP = 80;
}

void Magician::attack(Monster* monster)
{
	int damage = getPower() - monster->getDefence();

	if (damage < 0)
	{
		damage = 1;
		cout << nickname << "의 강력한 마법 공격!\n";
		cout << "몬스터가" << damage << "만큼 데미지를 받았습니다" << endl;
		monster->setHP(monster->getHP() - damage);
	}
	if (damage > 0)
	{
		cout << nickname << "의 강력한 마법 공격!\n";
		cout << "몬스터가 [" << damage << "] 만큼 데미지를 받았습니다" << endl;
		monster->setHP(monster->getHP() - damage);
	}

	cout << "몬스터의 남은 체력 [" << monster->getHP() << "]" << endl;
}