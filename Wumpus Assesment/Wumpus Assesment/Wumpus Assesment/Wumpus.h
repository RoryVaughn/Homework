#ifndef WUMPUS_H
#define WUMPUS_H

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

};
struct Object
{
	string name;
	bool Exist;
	int E_Pos_X;
	int E_Pos_Y;
	
};
class Robot
{
public:
	Robot(int, int, int);
	void Gameplay();

private:
	int Pos_X;
	int Pos_Y;
	int Direction;
};
Robot::Robot(int x, int y, int d)
{
	int Pos_X = x;
	int Pos_Y = y;
	int Direction = d;
}

void Robot::Gameplay()
{
	Player Robot;
	Robot.Alive = true;
	Robot.Pos_X = 0;
	Robot.Pos_Y = 0;
	Robot.Direction = 8;
	Object Pit;
	Pit.Exist = true;
	Pit.E_Pos_X = 1;
	Pit.E_Pos_Y = 3;
	
	Object Pit2;
	Pit2.Exist = true;
	Pit2.E_Pos_X = 3;
	Pit2.E_Pos_Y = 1;
	
	Object Wumpus;
	Wumpus.Exist = true;
	Wumpus.E_Pos_X = 2;
	Wumpus.E_Pos_Y = 1;
	Object Gold;
	Gold.Exist = true;
	Gold.E_Pos_X = 3;
	Gold.E_Pos_Y = 3;

	int input;
	cin >> input;
	
	switch (input)
	{
	case 8:
	{
		cout << "You face North." << endl;
		Robot.Direction = 8;
		break;
	}
	case 2:
	{
		cout << "You face South." << endl;
		Robot.Direction = 2;
		break;
	}
	case 4:
	{
		cout << "You face West." << endl;
		Robot.Direction = 4;
		break;
	}
	case 6:
	{
		cout << "You face East." << endl;
		Robot.Direction = 6;
		break;
	}
	case 5:
	{
		int arrow = 1;

		if( arrow == 1)
		{ 
		cout << "You shoot the arrow." << endl;
		arrow = (arrow - 1);
		if (Robot.Pos_X == 1)
		{
			if (Robot.Pos_Y == 1)
			{
				cout << "You killed the Wumpus" << endl;
				Wumpus.Exist = false;
			}
		
		}
		else if (Robot.Pos_X == 3)
		{
			if (Robot.Pos_Y == 0)
			{
				cout << "You killed the Wumpus" << endl;
				Wumpus.Exist = false;
			}

		}
		else if (Robot.Pos_X == 2)
		{
			if (Robot.Pos_Y == 3)
			{
				
				if (Robot.Direction = 8)
				{
					cout << "You killed the Wumpus" << endl;
					Wumpus.Exist = false;
				}
			}

		}
		else
		{
			cout << "Your arrow misses." << endl;
		}
		}
		else
		{
			cout << "You have no more arrows." << endl;
		}

			break;
	}
	default:
	{
		cout << "Incorrect input \nPlease enter a number listed in the controls." << endl;
		return  Robot::Gameplay();
	}
	}




	if (Robot.Pos_X == 1)
	{
		if (Robot.Pos_Y == 3)
		{
			cout << "You Died!" << endl;

		}

	}
	if (Robot.Pos_X == 2)
	{
		if (Robot.Pos_Y == 1)
		{
			cout << "You Died!" << endl;

		}

	}

	if (Robot.Pos_X == 3)
	{
		if (Robot.Pos_Y == 1)
		{
			cout << "You Died!" << endl;
			
		}
		
	}
}

#endif WUMPUS_H