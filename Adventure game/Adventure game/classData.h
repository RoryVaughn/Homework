#pragma once
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
//Below is where the classes are declared.

class Tank
{
public:
	Tank(int, int, int);
	void Combat();

private:
	int Block;
	int Slash;
	int ShieldBash;
};

class Assasin
{
public:
	Assasin(int, int, int);
	void Combat1();
private:
	int ThrowKunai;
	int Fakeout;
	int Backstab;
};
class Warrior
{
public:
	Warrior(int, int, int);
	void Combat2();

private:
	int Slash;
	int Parry;
	int Lunge;
};
class Enemy
{
public:
	Enemy(int, int, int);
	void eCombat();
private:
	int Slash;
	int stab;
	int Block;
};

//just to separate class declaration.
Tank::Tank(int q, int  w, int e)
{
	int Block = q;
	int Slash = w;
	int ShieldBash = e;
}
Assasin::Assasin(int q, int w, int e)
{
	int ThrowKunai = q;
	int Fakeout = w;
	int Backstab = e;
}
Warrior::Warrior(int q, int w, int e)
{
	int Slash = q;
	int Parry = w;
	int Lunge = e;
}
Enemy::Enemy(int q, int w, int e)
{
	int slash = q;
	int stab = w;
	int block = e;
}

//Below here is where the Classes' fucntions are declared
void Tank::Combat()
{
	Player Tank;
	Tank.health = 500;
	Tank.mana = 200;
	Tank.AD = 5;
	Tank.armor = 20;


	Player Enemy;
	Enemy.health = 500;
	Enemy.mana = 400;
	Enemy.AD = 15;
	Enemy.armor = 5;


	cout << "You have chosen the Tank class" << endl;

	cout << "Tank's stats are :" << endl;
	cout << Tank.health << " Health" << endl;
	cout << Tank.mana << " Mana" << endl;
	cout << Tank.AD << " Attack Damage" << endl;
	cout << Tank.armor << " Armor" << endl;
	cout << endl;
	cout << "The Enemy's stats are :" << endl;
	cout << Enemy.health << " Health" << endl;
	cout << Enemy.mana << " Mana" << endl;
	cout << Enemy.AD << " Attack Damage" << endl;
	cout << Enemy.armor << " Armor" << endl;
	cout << endl << endl;

	while (Tank.health > 0 || Enemy.health > 0)
	{
		int h;
		int randomNum;
		cout << "Choose your attack  (1 = Block, 2 = Slash, 3 = Shield Bash) \n \n";
		cin >> h;
		randomNum = ((rand() % 3) + 1);
		switch (h)
		{
		case 1:
		{
			cout << "You attempt to block the attack. \n";
			switch (randomNum)
			{
			case 1:
			{
				cout << "You succesfully block the attack!  \n \n";
				cout << "Your health is: " << Tank.health << endl;
				cout << "The Enemy's health is: " << Enemy.health << endl << endl;
				break;
			}
			case 2:
			{
				cout << "The enemy accurately stabs around your block!  \n \n";
				cout << "Your health is: " << Tank.health << endl;
				cout << "The Enemy's health is: " << Enemy.health << endl << endl;
				break;
			}
			case 3:
			{
				cout << "You both attempt to block an attack. \n Stop being bitches.  \n \n";
				cout << "Your health is: " << Tank.health << endl;
				cout << "The Enemy's health is: " << Enemy.health << endl << endl;
				break;
			}


			}
			break;
		}
		case 2:
		{
			cout << "You swing your sword diagonally. \n";
			switch (randomNum)
			{
			case 1:
			{
				cout << "You both make contact!  \n \n";
				cout << "Your health is: " << Tank.health << endl;
				cout << "The Enemy's health is: " << Enemy.health << endl << endl;
				break;
			}
			case 2:
			{
				cout << "You hit and parry the enemy's stab!  \n \n";
				cout << "Your health is: " << Tank.health << endl;
				cout << "The Enemy's health is: " << Enemy.health << endl << endl;
				break;
			}
			case 3:
			{
				cout << "Your Enemy blocks your attack!  \n \n";
				cout << "Your health is: " << Tank.health << endl;
				cout << "The Enemy's health is: " << Enemy.health << endl << endl;
				break;
			}
			}
			break;
		}
		case 3:
		{
			cout << "You bash your Enemy with your shield. \n";
			switch (randomNum)
			{
			case 1:
			{
				cout << "You block the stab and hit your enemy with your shield! \n \n";
				cout << "Your health is: " << Tank.health << endl;
				cout << "The Enemy's health is: " << Enemy.health << endl << endl;
				break;
			}
			case 2:
			{
				cout << "You run into your enemy's sword \n \n";
				cout << "Your health is: " << Tank.health << endl;
				cout << "The Enemy's health is: " << Enemy.health << endl << endl;
				break;
			}
			case 3:
			{
				cout << "You knco your enemy over with brute force! \n \n";

				cout << "Your health is: " << Tank.health << endl;
				cout << "The Enemy's health is: " << Enemy.health << endl << endl;
				break;
			}
			}
			break;
		}

		}
		if (Tank.health <= 0)
		{
			Tank.health = 0;
			cout << "You got Rekt! \n GAME OVER" << endl;
		}
		if (Enemy.health <= 0)
		{
			Enemy.health = 0;
			cout << "You win!" << endl;
		}

	}
}
void Assasin::Combat1()
{
	Player Assasin;
	Assasin.health = 100;
	Assasin.mana = 400;
	Assasin.AD = 30;
	Assasin.armor = 3;

	
		Player Enemy;
		Enemy.health = 500;
		Enemy.mana = 400;
		Enemy.AD = 15;
		Enemy.armor = 5;
	

	cout << "You have chosen the Assasin class" << endl;

	cout << "Assasin's stats are :" << endl;
	cout << Assasin.health << " Health" << endl;
	cout << Assasin.mana << " Mana" << endl;
	cout << Assasin.AD << " Attack Damage" << endl;
	cout << Assasin.armor << " Armor" << endl;
	cout << endl;
	cout << "The Enemy's stats are :" << endl;
	cout << Enemy.health << " Health" << endl;
	cout << Enemy.mana << " Mana" << endl;
	cout << Enemy.AD << " Attack Damage" << endl;
	cout << Enemy.armor << " Armor" << endl;
	cout << endl << endl;
}
void Warrior::Combat2()
{
	Player Warrior;
	Warrior.health = 300;
	Warrior.mana = 300;
	Warrior.AD = 15;
	Warrior.armor = 10;

	
		Player Enemy;
		Enemy.health = 500;
		Enemy.mana = 400;
		Enemy.AD = 15;
		Enemy.armor = 5;
	

	cout << "You have chosen the Warrior class" << endl;

	cout << "Warrior's stats are :" << endl;

	cout << Warrior.health << " Health" << endl;
	cout << Warrior.mana << " Mana" << endl;
	cout << Warrior.AD << " Attack Damage" << endl;
	cout << Warrior.armor << " Armor" << endl;
	cout << endl;
	cout << "The Enemy's stats are :" << endl;
	cout << Enemy.health << " Health" << endl;
	cout << Enemy.mana << " Mana" << endl;
	cout << Enemy.AD << " Attack Damage" << endl;
	cout << Enemy.armor << " Armor" << endl;
	cout << endl << endl;
	
}

