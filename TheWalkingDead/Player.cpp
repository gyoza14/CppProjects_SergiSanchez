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
	t_precision = rand() % 0,1.0;
	t_life = rand() % 0,100;
	int arma = rand() % 6;

	switch (arma)
	{
	case 0:
		t_weapon = FISTS;
		break;
	case 1:
		t_weapon = GUN;
		break;
	case 2:
		t_weapon = SHOTGUN;
		break;
	case 3:
		t_weapon = REVOLVER;
		break;
	case 4:
		t_weapon = SNIPER;
		break;
	case 5:
		t_weapon = MACHINE_GUN;
		break;
	case 6:
		t_weapon = MAX;
		break;
	default:
		break;
	}

	this->wep = t_weapon;
	this->precision = t_precision;
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
	}
}

Player::~Player()
{
}
