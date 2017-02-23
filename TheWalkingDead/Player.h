#pragma once
#include <stdlib.h>

class Zombie;

class Player
{
private:
	enum Weapon { FISTS, GUN, SHOTGUN, REVOLVER, SNIPER, MACHINE_GUN, MAX };
	
	float precision;
	int life;
public:
	Weapon wep;

	Weapon GetWeapon() { return wep; }
	void setPrecision(float precision) { this->precision = precision; }
	float getPrecision() { return precision; }
	void setLife(int life) { this->life = life; }
	int getLife() { return life; }

	void attack(Zombie &);
	bool isAlive();
	Player();
	Player(Weapon t_weapon, float t_precision, int t_life);
	~Player();
};

