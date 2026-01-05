#pragma once
#include "Player.h"

class Thief : public Player
{
public:
	Thief(const std::string& nickname);
	void attack(Monster* monster) override;
};
