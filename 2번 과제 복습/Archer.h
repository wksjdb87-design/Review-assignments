#pragma once
#include "Player.h"
#include "Monster.h"

class Archer : public Player
{
public:
	Archer(const std::string& nickname);
	void Player::attack(Monster* monster) override;
};