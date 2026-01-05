#pragma once
#include <string>
#include "Monster.h"

class Monster;

using namespace std;

class Player
{
protected:
	string job_name;
	string nickname;
	int level;
	int HP;
	int MP;
	int power;
	int defence;
	int accuracy;
	int speed;

public:
	Player(const std::string& nickname);
	virtual ~Player() = default;

	int getLevel();
	int getHP();
	int getMP();
	int getPower();
	int getDefence();
	int getAccuracy();
	int getSpeed();

	void setLevel(int _level);
	void setHP(int _HP);
	void setMP(int _MP);
	void setPower(int _power);
	void setDefence(int _defence);
	void setAccuracy(int _accuracy);
	void setSpeed(int _speed);

	virtual void attack(Monster* monster) = 0;
	void printPlayerStatus();
};