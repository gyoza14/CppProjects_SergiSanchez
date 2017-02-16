#include <iostream>
#include <string>

enum EnemyType {zombie,vampire,ghost,witch};


std::string nombreEnemigos[6]  = {"Amparo", "Zerka","Raziel", "Nana", "Gotzi","Mike"};
#define NUMENEMIGOS 5
struct Enemy
{

	
	EnemyType type;
	std::string name;
	int healt;
	EnemyType GetEnemyTypeString(){return type;}
	
	std::string getName() { return name; }
	int getHealth() { return healt; }

	
	

	
};

Enemy CreateRandomEnemy()
{
	EnemyType type;
	int randomType = rand() % 4;
	switch (randomType)
	{
	case 0:
		type = zombie;
		break;
	case 1:
		type = vampire;
		break;
	case 2:
		type = ghost;
		break;
	case 3:
		type = witch;
		break;
	default:
		break;
	}

	
	return{ type, nombreEnemigos[rand()%5], rand()%450 };
}

bool operator == (Enemy &e, Enemy &e2)
{
	if (e.type == e2.type && e.name == e2.name)
	{
		return true;
	}
	else
	{
		return false;
	}
}



	



int main()
{
	Enemy enemigos[NUMENEMIGOS];
	for (int i = 0; i < NUMENEMIGOS; i++)
	{
		enemigos[i] = CreateRandomEnemy();
		std::string typo;
		switch (enemigos[i].GetEnemyTypeString())
		{
		case 0:
			typo = "zombie";
			break;
		case 1:
			typo = "vampire";
			break;
		case 2:
			typo = "ghost";
			break;
		case 3:
			typo = "witch";
			break;
		default:
			break;
		}
		std::cout << typo << ' ' << enemigos[i].getName() << ' ' << enemigos[i].getHealth() << std::endl;
	}

	

	system("pause");
	return 0;

}

