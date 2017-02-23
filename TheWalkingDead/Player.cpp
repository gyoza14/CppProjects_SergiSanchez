#include "stdafx.h"
#include "Player.h"
#include "Zombie.h"
bool Player::isAlive()
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
Player::Player()
{}

Player::Player(Weapon t_weapon, float t_precision, int t_life)
{
	this->precision = t_precision;
	this->wep = t_weapon;
	this->life = t_life;

	
}
void Player::attack(Zombie &z)
{
	switch (GetWeapon())
	{
	case FISTS:
		z.setLife(z.getLife() - FISTS * getPrecision());
		break;
	case GUN:
		z.setLife(z.getLife() - GUN * getPrecision());
		break;
	case SHOTGUN:
		z.setLife(z.getLife() - SHOTGUN * getPrecision());
		break;
	case REVOLVER:
		z.setLife(z.getLife() - REVOLVER * getPrecision());
		break;
	case SNIPER:
		z.setLife(z.getLife() - SNIPER * getPrecision());
		break;
	case MACHINE_GUN:
		z.setLife(z.getLife() - MACHINE_GUN * getPrecision());
		break;
	case MAX:
		
		break;
	default:
		break;
	}
}

Player::~Player()
{
}
