#pragma once
#include "Player.h"

class Magician : public Player
{
public:
	Magician(const std::string& nickname);
	void attack(Monster* monster) override;
};