#include <iostream>

enum EnemyType {zombie,vampire,ghost,witch};

struct Enemy
{
	EnemyType type;
	std::string name;
	int healt;
	EnemyType GetEnemyTypeString(){return type;}
	Enemy CreateRandomEnemy()
	{
		
	}
};


int main()
{
	
	return 0;

}