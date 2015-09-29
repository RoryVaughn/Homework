#ifndef ZAMBIE_H
#define ZABMIE_H

#include <iostream>
#include <string>
using namespace std;

struct Player
{
	string name;
	bool Alive;
	int Pos_X = 0;
	int Pos_Y = 0;
	int Direction;
	int ATT;
	int HP;

};
struct Enemy
{
	string name;
	bool Exist;
	int E_Pos_X;
	int E_Pos_Y;
	int ATT;
	int HP;

};
class Zombie
{
public:
	Zombie(int, int, int);
	void Gameplay();

private:
	int Pos_X;
	int Pos_Y;
	int Direction;
};
Zombie::Zombie(int x, int y, int d)
{
	int Pos_X = x;
	int Pos_Y = y;
	int Direction = d;
}

void Zombie::Gameplay()
{
	Player Zombie;
	Zombie.Alive = 1;
	Zombie.Pos_X = 0;
	Zombie.Pos_Y = 0;
	Zombie.Direction = 8;

	Enemy Dave;
	Dave.Exist = 1;
	Dave.E_Pos_X = 1;
	Dave.E_Pos_Y = 3;

	Enemy Bill;
	Bill.Exist = 1;
	Bill.E_Pos_X = 3;
	Bill.E_Pos_Y = 1;

	Enemy Kevin;
	Kevin.Exist = 1;
	Kevin.E_Pos_X = 2;
	Kevin.E_Pos_Y = 1;

	Enemy Fred;
	Fred.Exist = 1;
	Fred.E_Pos_X = 3;
	Fred.E_Pos_Y = 3;

	int Bullets = 14;

	while (Zombie.Alive == true)
	{
		int input;
		cin >> input;



		switch (input)
		{
		case 8:
		{

			cout << "You face North." << endl;
			Zombie.Direction = 8;
			break;
		}
		case 2:
		{

			cout << "You face South." << endl;
			Zombie.Direction = 2;
			break;
		}
		case 4:
		{

			cout << "You face West." << endl;
			Zombie.Direction = 4;
			break;
		}
		case 6:
		{

			cout << "You face East." << endl;
			Zombie.Direction = 6;
			break;
		}
		case 5:
		{

			if (Bullets >= 1)
			{
				cout << "You shoot the bullet." << endl;
				Bullets = Bullets - 1;
				if (Zombie.Pos_X == 1)
				{
					if (Zombie.Pos_Y == 1)
					{
						if (Zombie.Direction = 6)
						{
							cout << "You killed the Kenny!!!!  (the mailman)" << endl;
							Kevin.Exist = Kevin.Exist - 1;
						}
					}
				}
				else if (Zombie.Pos_X == 2)
				{
					if (Zombie.Pos_Y == 0)
					{
						if (Zombie.Direction = 8)
						{
							cout << "You killed the Kenny!!!!  (the mailman)" << endl;
							Kevin.Exist = Kevin.Exist - 1;
						}
					}
				}
				else if (Zombie.Pos_X == 2)
				{
					if (Zombie.Pos_Y == 2)
					{
						if (Zombie.Direction = 2)
						{
							cout << "You killed the Kenny!!!!  (the mailman)" << endl;
							Kevin.Exist = Kevin.Exist - 1;
						}
					}
				}
				else
				{
					cout << "Your bullet misses." << endl;
				}
			}
			else
			{
				cout << "You have no more bullets." << endl;
			}
			break;
		}
		case 0:
		{
			switch (Zombie.Direction)
			{
			case 2:
			{
				Zombie.Pos_Y = Zombie.Pos_Y--;
				cout << "you new position is (" << Zombie.Pos_X << ", " << Zombie.Pos_Y << ")" << endl;
				break;
			}
			case 4:
			{
				Zombie.Pos_X = Zombie.Pos_X--;
				cout << "you new position is (" << Zombie.Pos_X << ", " << Zombie.Pos_Y << ")" << endl;
				break;
			}
			case 6:
			{
				Zombie.Pos_X = Zombie.Pos_X++;
				cout << "you new position is (" << Zombie.Pos_X << ", " << Zombie.Pos_Y << ")" << endl;
				break;
			}
			case 8:
			{
				Zombie.Pos_Y = Zombie.Pos_Y++;
				cout << "you new position is (" << Zombie.Pos_X << ", " << Zombie.Pos_Y << ")" << endl;
				break;
			}
			}
			break;
		}
		default:
		{
			cout << "Incorrect input \nPlease enter a number listed in the controls." << endl;
		}
		}

		if (Fred.Exist == true)
		{
			if (Zombie.Pos_X == 2)
			{

				if (Zombie.Pos_Y == 3)
				{
					cout << "Your Zambie sense is tingling." << endl;
				}
			}
			if (Zombie.Pos_X == 3)
			{

				if (Zombie.Pos_Y == 2)
				{
					cout << "Your Zambie sense is tingling." << endl;
				}
			}

			if (Zombie.Pos_X == 1)
			{

				if (Zombie.Pos_Y == 2)
				{
					cout << "Your Zambie sense is tingling." << endl;
				}
			}
			if (Zombie.Pos_X == 0)
			{

				if (Zombie.Pos_Y == 3)
				{
					cout << "Your Zambie sense is tingling." << endl;
				}
			}
			if (Zombie.Pos_X == 2)
			{

				if (Zombie.Pos_Y == 3)
				{
					cout << "Your Zambie sense is tingling." << endl;
				}
			}
			if (Zombie.Pos_X == 2)
			{

				if (Zombie.Pos_Y == 1)
				{
					cout << "Your Zambie sense is tingling." << endl;
				}
			}
			if (Zombie.Pos_X == 3)
			{
				if (Zombie.Pos_Y == 0)
				{
					cout << "Your Zambie sense is tingling." << endl;
				}
				if (Zombie.Pos_Y == 2)
				{
					cout << "Your Zambie sense is tingling." << endl;
				}

			}



			if (Zombie.Pos_X >= 4 || Zombie.Pos_X < 0)
			{
				cout << "You went out of the grid and died!" << endl;
				Zombie.Alive = false;
				break;
			}
			if (Zombie.Pos_Y >= 4 || Zombie.Pos_Y < 0)
			{
				cout << "You went out of the grid and died!" << endl;
				Zombie.Alive = false;
				break;
			}

		}
	}
}
#endif ZAMBIE_H