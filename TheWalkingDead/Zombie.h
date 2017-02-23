#pragma once
#include <stdlib.h>

class Player;

class Zombie
{
private:
	int distanceToPlayer;
	float speed;
	float damage;
	int life;
public:

	void setDistanceToPlayer(int distance) { this->distanceToPlayer = distance; }
	int getDistanceToPlayer() { return distanceToPlayer; }
	void setSpeed(float speed) { this->speed = speed; }
	float getSpeed() { return speed; }
	void setDamage(float damage) { this->damage = damage; }
	float getDamage() { return damage; }
	void setLife(int life) { this->life = life; }
	int getLife() { return life; }

	void attack(Player &p);
	bool isAlive();
	Zombie();
	Zombie(int t_distanceToPlayer, float t_speed, float t_damage, int t_life);
	~Zombie();
};

