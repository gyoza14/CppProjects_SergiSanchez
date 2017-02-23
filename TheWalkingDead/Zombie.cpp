#include "stdafx.h"
#include "Zombie.h"
#include "Player.h"
Zombie::Zombie()
{
}
Zombie::Zombie(int t_distanceToPlayer, float t_speed, float t_damage, int t_life)
{
	t_distanceToPlayer = rand() % 20, 200.0;
	t_speed = rand() % 0, 20.0;
	t_damage = rand() % 0, 20.0;
	t_life = rand() % 100;

}

void Zombie::attack(Player &p)
{
	if (getDistanceToPlayer() <= 0)
	{
		p.setLife(p.getLife() - getDamage());
	}
	else
	{
		setDistanceToPlayer(getDistanceToPlayer() - 10);
	}
}

bool Zombie::isAlive()
{
	if (getLife() > 0)
	{
		return true;
	}
	else
	{
		return false;
	}

}

Zombie::~Zombie()
{
}
