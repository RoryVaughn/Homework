//Name: Rory Vaughn
//Assessment Name:ADGP_101
//Teacher: Matthew Williamson
//Date: 9/14/15

#ifndef WUMPUS_H
#define WUMPUS_H
//Rory Vaughn

#include <iostream>
#include <string>
using namespace std;

struct Player
{
	/*
	 This is the struct for my player object
	*/
	string name; //name of the player
	bool Alive; //Checks to see if the player is alive or not
	int Pos_X = 0; //Players Position on the x axis
	int Pos_Y = 0; //PLayer Position on the y axis
	int Direction; //Direction the player is facing
	/*
		Why did you use int varibale type for direction
	*/

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

//Contructor for creating a Robot object
Robot::Robot(int x, int y, int d)
{
	int Pos_X = x;
	int Pos_Y = y;
	int Direction = d;
}

void Robot::Gameplay()
{
	Player Robot;
	Robot.Alive = 1;
	Robot.Pos_X = 0;
	Robot.Pos_Y = 0;
	Robot.Direction = 8;
	Object Pit;
	Pit.Exist = 1;
	Pit.E_Pos_X = 1;
	Pit.E_Pos_Y = 3;
	
	Object Pit2;
	Pit2.Exist = 1;
	Pit2.E_Pos_X = 3;
	Pit2.E_Pos_Y = 1;
	
	Object Wumpus;
	Wumpus.Exist = 1;
	Wumpus.E_Pos_X = 2;
	Wumpus.E_Pos_Y = 1;
	Object Gold;
	Gold.Exist = 1;
	Gold.E_Pos_X = 3;
	Gold.E_Pos_Y = 3;



	while (Robot.Alive == true)
	{
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
			if (arrow == 1)
			{
				cout << "You shoot the arrow." << endl;
				arrow = arrow - 1;
				if (Robot.Pos_X == 1)
				{
					if (Robot.Pos_Y == 1)
					{
						if (Robot.Direction = 6)
						{
							cout << "You killed the Wumpus" << endl;
							Wumpus.Exist = Wumpus.Exist - 1;
						}
					}
				}
				else if (Robot.Pos_X == 2)
				{
					if (Robot.Pos_Y == 0)
					{
						if (Robot.Direction = 8)
						{
							cout << "You killed the Wumpus" << endl;
							Wumpus.Exist = Wumpus.Exist - 1;
						}
					}
				}
				else if (Robot.Pos_X == 2)
				{
					if (Robot.Pos_Y == 2)
					{
						if (Robot.Direction = 2)
						{
							cout << "You killed the Wumpus" << endl;
							Wumpus.Exist = Wumpus.Exist - 1;
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
		case 0:
		{
			switch (Robot.Direction)
			{
			case 2: 
			{
				Robot.Pos_Y = Robot.Pos_Y--;
				cout << "you new position is (" << Robot.Pos_X << ", " << Robot.Pos_Y << ")" << endl;
				break;
			}
			case 4:
			{
				Robot.Pos_X = Robot.Pos_X--;
				cout << "you new position is (" << Robot.Pos_X << ", " << Robot.Pos_Y << ")" << endl;
				break;
			}
			case 6:
			{
				Robot.Pos_X = Robot.Pos_X++;
				cout << "you new position is (" << Robot.Pos_X << ", " << Robot.Pos_Y << ")" << endl;
				break;
			}
			case 8:
			{
				Robot.Pos_Y = Robot.Pos_Y++;
				cout << "you new position is (" << Robot.Pos_X << ", " << Robot.Pos_Y << ")" << endl;
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
		
		if (Gold.Exist == true)
		{
			if (Robot.Pos_X == 2)
			{

				if (Robot.Pos_Y == 3)
				{
					cout << "You see some glitter" << endl;
				}
			}
			if (Robot.Pos_X == 3)
			{

				if (Robot.Pos_Y == 2)
				{
					cout << "You see some glitter" << endl;
				}
			}

			if (Robot.Pos_X == 1)
			{

				if (Robot.Pos_Y == 2)
				{
					cout << "You feel a slight breeze" << endl;
				}
			}
			if (Robot.Pos_X == 0)
			{

				if (Robot.Pos_Y == 3)
				{
					cout << "You feel a slight breeze" << endl;
				}
			}
			if (Robot.Pos_X == 2)
			{

				if (Robot.Pos_Y == 3)
				{
					cout << "You feel a slight breeze" << endl;
				}
			}
			if (Robot.Pos_X == 2)
			{

				if (Robot.Pos_Y == 1)
				{
					cout << "You feel a slight breeze" << endl;
				}
			}
			if (Robot.Pos_X == 3)
			{
				if (Robot.Pos_Y == 0)
				{
					cout << "You feel a slight breeze" << endl;
				}
				if (Robot.Pos_Y == 2)
				{
					cout << "You feel a slight breeze" << endl;
				}
			
		}
			if (Robot.Pos_X == Gold.E_Pos_X)
			{
				if (Robot.Pos_Y == Gold.E_Pos_Y)
				{
					cout << "You Found the Gold! \nGo back to the starting square to win!\nBe careful. You will no longer be able to sense the traps." << endl;
					Gold.Exist = 0;
				}
				
			}
		}
		if (Gold.Exist == 0)
		{
			
			if (Robot.Pos_X == 0)
			{
				if (Robot.Pos_Y == 0)
				{
					cout << "You won!\n" << endl;
					break;


				}
			}
		}
		
		if (Robot.Pos_X >= 4 || Robot.Pos_X < 0)
		{
			cout << "You went out of the grid and died!" << endl;
			Robot.Alive = false;
			break;
		}
		if (Robot.Pos_Y >= 4 || Robot.Pos_Y < 0)
		{
			cout << "You went out of the grid and died!" << endl;
			Robot.Alive = false;
			break;
		}
		if (Robot.Pos_X == 1)
		{
			if (Robot.Pos_Y == 3)
			{
				cout << "You fell into the Wumpus' trap and died!!" << endl;
				Robot.Alive = false;
				break;

			}

		}
		if (Wumpus.Exist == 1)
		{ 
			if (Robot.Pos_X == 1)
			{
				if (Robot.Pos_Y == 1)
				{
					cout << "You smell a terrible smell." << endl;
				}
			}
			if (Robot.Pos_X == 2)
			{
				if (Robot.Pos_Y == 2)
				{
					cout << "You smell a terrible smell." << endl;
				}
				if (Robot.Pos_Y == 1)
				{
					cout << "You were slain by the Wumpus!" << endl;
					Robot.Alive = false;

				}
				if (Robot.Pos_Y == 0)
				{
					cout << "You smell a terrible smell." << endl;
				}
			}
		}
		if (Robot.Pos_X == 3)
		{
			
			if (Robot.Pos_Y == 1)
			{
				cout << "You fell into the Wumpus' trap and died!" << endl;
				Robot.Alive = false;
				break;
			}
			

		}
	}
}

#endif WUMPUS_H