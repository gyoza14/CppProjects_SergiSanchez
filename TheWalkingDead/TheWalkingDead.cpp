#include "stdafx.h"
#include "string.h"
#include <iostream>
#include <ctime>
#include "Zombie.h"
#include "Player.h"


#define NUMZOMBIES 10


int main()
{
	srand(time(nullptr));
	Player p;
	std::string nArma;
	p.setPrecision(rand() % 1);
	p.setLife(100);
	int arma = rand()%6;

	switch (arma)
	{
	case 0:
		p.setWeapon(p.FISTS);
		nArma = "FISTS";
		break;
	case 1:
		p.setWeapon(p.GUN);
		nArma = "GUN";
		break;
	case 2:
		p.setWeapon(p.SHOTGUN);
		nArma = "SHOTGUN";
		break;
	case 3:
		p.setWeapon(p.REVOLVER);
		nArma = "REVOLVER";
		break;
	case 4:
		p.setWeapon(p.SNIPER);
		nArma = "SNIPER";
		break;
	case 5:
		p.setWeapon(p.MACHINE_GUN);
		nArma = "MACHINE_GUN";
		break;
	case 6:
		p.setWeapon(p.MAX);
		nArma = "MAX";
		break;
	default:
		break;
	}

	Zombie z[NUMZOMBIES];
	
	bool zombiesAreAlive=true;
	
	while (zombiesAreAlive && p.isAlive())
	{
		p.attack(z[rand()%NUMZOMBIES]);
		for (int i = 0; i < NUMZOMBIES; i++)
		{
			z[i].attack(p);
			std::cout << "El player recibe " << z[i].getDamage() << " puntos de daño le quedan " << p.getLife() << std::endl;
		}

		std::cout << "al Player le queda " << p.getLife() << std::endl;
		

	}


	

	system("pause");
    return 0;
}

