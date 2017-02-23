#include <string>
#include <iostream>
#include <ctime>
#include "Zombie.h"
#include "Player.h"
#include "stdafx.h"

#define NUMZOMBIES 10


int main()
{
	Player p;
	Zombie z[NUMZOMBIES];
	srand(time(nullptr));
	bool zombiesAreAlive=true;
	
	while (zombiesAreAlive && p.isAlive())
	{
		p.attack(z[rand()%NUMZOMBIES]);
		for (int i = 0; i < NUMZOMBIES; i++)
		{
			z[i].attack(p);
		}

		std::cout << p.getLife() << ' ' << p.getPrecision << ' ' << p.GetWeapon() << ' ' << std::endl;


	}

	


    return 0;
}

