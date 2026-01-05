#pragma once

class Status
{
private:
	int status[4];
	int hp;
	int mp;
	int attackpower;
	int defense;
	int p_hppotion;
	int p_mppotion;

public:
	Status();
	int GetHp();
	int GetMp();
	int GetAttackpower();
	int GetDefense();
	int Getp_HPpotion();
	int Getp_MPpotion();

	void SetHp(int _hp);
	void SetMp(int _mp);
	void SetAttackpower(int _attackpower);
	void SetDefense(int _defense);
	void Setp_HPpotion(int _p_hppotion);
	void Setp_MPpotion(int _p_mppotion);
};