#include <iostream>
#include <string>
using namespace std;
struct Player
{
	string name;
	int health;
	int mana;
	int AD;
	int armor;
};

class Fighter
{
	public:
		Fighter(int, int, int);
	void printDamage();

	private:
		int Stab;
		int Slash;
		int Lunge;
};

Fighter::Fighter(int a, int b, int c)
{
	Stab = a;
	Slash = b;
	Lunge = c;
	
}
void Fighter::printDamage()
{
	
	Player Darius;
	Darius.health = 40;
	Darius.mana = 20;
	Darius.AD = 5;
	Darius.armor = 2;

	Player Garen;
	Garen.health = 50;
	Garen.mana = 70;
	Garen.AD = 2;
	Garen.armor = 5;

	cout << "Garen's stats are :" << endl;
	cout << Garen.health << " Health" << endl;
	cout << Garen.mana << " Mana" << endl;
	cout << Garen.AD << " Attack Damage" << endl;
	cout << Garen.armor << " Armor" << endl;
	cout << endl;
	cout << "Daruis' stats are :" << endl;
	cout << Darius.health << " Health" << endl;
	cout << Darius.mana << " Mana" << endl;
	cout << Darius.AD << " Attack Damage" << endl;
	cout << Darius.armor << " Armor" << endl;
	cout << endl << endl;

	cout << "It's about to go down" << endl << endl;

	cout << "The average health of the two fighters is " << ((Garen.health + Darius.health) / 2) << endl;
	cout << "Darius strikes first with slash and does " << Slash << " damage" << endl;
	cout << "Garen's health is now: " << (Garen.health = (Garen.health - Slash)) << endl;
	cout << "Garen strikes back with a stab attack and does " << Stab << " damage" << endl;
	cout << "Daruis' health is now: " << (Darius. health = (Darius.health - Stab)) << endl;
	cout << "Darius strikes with a lunge attack and does " << Lunge << " damage" << endl;
	cout << "Garen's health is now: " << (Garen.health = (Garen.health - Lunge)) << endl;
	cout << "Garen strikes with a lunge attack and does " << Lunge << " damage" << endl;
	cout << "Darius' health is now: " << (Darius.health = (Darius.health - Stab)) << endl;
	cout << "Darius strikes with a Slash attack and does " << Slash << " damage" << endl;
	cout << "Garen's health is now: " << (Garen.health = (Garen.health - Slash)) << endl;
	cout << "Garen strikes with a Stab attack and does " << Stab << " damage" << endl;
	cout << "Darius' health is now: " << (Darius.health = (Darius.health - Stab)) << endl;
	cout << "Darius strikes with a Slash attack and does " << Slash << " damage" << endl;
	cout << "Garen's health is now: " << (Garen.health = (Garen.health - Slash)) << endl;
	cout << "Garen strikes with a Stab attack and does " << Stab << " damage" << endl;
	cout << "Darius' health is now: " << (Darius.health = (Darius.health - Stab)) << endl;
	if (Garen.health <= 0)
	{
		Garen.health = 0;
		cout << "Darius wins!" << endl;
	}
	if (Darius.health <= 0)
	{
		Darius.health = 0;
		cout << "Garen wins!" << endl;
	}
}

//return type integer fun name poop
//int poop(int, int);



int main()
{
	Fighter Fighter(10, 12, 7);
	Fighter.printDamage();
	system("pause");
	return 0;
}

//int poop(int a, int b)
//{
//
//	a + b
//}