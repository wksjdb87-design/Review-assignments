#pragma once
#include "Player.h"

class Warrior : public Player
{
public:
	Warrior(const std::string& nickname);
	void attack(Monster* monster) override;
};
