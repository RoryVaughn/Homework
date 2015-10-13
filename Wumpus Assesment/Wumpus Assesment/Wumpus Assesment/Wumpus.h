#ifndef WUMPUS_H
#define WUMPUS_H
// Name :: Rory Vaughn
//Assignment :: Assessment #2
//Teacher :: Matthew Williamson
//Date :: 10/13/2015
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

	int arrow = 2; // keeps track of the ammunition of the 

	while (Robot.Alive == true) //this is what tells the game to continue to take input from the user.
	{
	int input; // this variable is what all of the input from the user comes from.
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
			
			if (arrow == 2)
			{
				cout << "You shoot the arrow." << endl;
				arrow = arrow - 1;
				if (Robot.Pos_X == 1)
				{
					if (Robot.Pos_Y == 1)
					{
						if (Robot.Direction = 6)
						{
							cout << "You killed the Wumpus" << endl; // this allows the player to kill the wumpus from the right side of the wumpus
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
							cout << "You killed the Wumpus" << endl; // this allows the player to kill the wumpus from the bottom side of the wumpus
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
							cout << "You killed the Wumpus" << endl; // this allows the player to kill the wumpus from the top side of the wumpus
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
			cout << "-------------------------------------------------------------------------------" << endl;
			switch (Robot.Direction) // this entire case moves the player and shows the user their new location.
			{
			case 2: 
			{
				Robot.Pos_Y = Robot.Pos_Y--;
				cout << "you new position is (" << Robot.Pos_X << ", " << Robot.Pos_Y << ")" << endl; //code for looking South
				break;
			}
			case 4:
			{
				Robot.Pos_X = Robot.Pos_X--;
				cout << "you new position is (" << Robot.Pos_X << ", " << Robot.Pos_Y << ")" << endl; // code for looking West
				break;
			}
			case 6:
			{
				Robot.Pos_X = Robot.Pos_X++;
				cout << "you new position is (" << Robot.Pos_X << ", " << Robot.Pos_Y << ")" << endl; // code for looking East
				break;
			}
			case 8:
			{
				Robot.Pos_Y = Robot.Pos_Y++;
				cout << "you new position is (" << Robot.Pos_X << ", " << Robot.Pos_Y << ")" << endl; // code for looking North
				break;
			}
			}
			break;
		}
		default:
		{
			cout << "Incorrect input \nPlease enter a number listed in the controls." << endl; // this inhibits the user from entering input that could possibly bug the game.
		}
		}
		
		if (Gold.Exist == true)
		{
			if (Robot.Pos_X == 2)
			{

				if (Robot.Pos_Y == 3)
				{
					cout << "You see some glitter" << endl; // this code allows the player to sense the gold nearby.
				}
			}
			if (Robot.Pos_X == 3)
			{

				if (Robot.Pos_Y == 2)
				{
					cout << "You see some glitter" << endl;// this code allows the player to sense the gold nearby.
				}
			}

			if (Robot.Pos_X == 1)
			{

				if (Robot.Pos_Y == 2)
				{
					cout << "You feel a slight breeze" << endl;// this code allows the player to sense a pit nearby.
				}
			}
			if (Robot.Pos_X == 0)
			{

				if (Robot.Pos_Y == 3)
				{
					cout << "You feel a slight breeze" << endl;// this code allows the player to sense a pit nearby.
				}
			}
			if (Robot.Pos_X == 2)
			{

				if (Robot.Pos_Y == 3)
				{
					cout << "You feel a slight breeze" << endl;// this code allows the player to sense a pit nearby.
				}
			}
			if (Robot.Pos_X == 2)
			{

				if (Robot.Pos_Y == 1)
				{
					cout << "You feel a slight breeze" << endl;// this code allows the player to sense a pit nearby.
				}
			} 
			if (Robot.Pos_X == 3)
			{
				if (Robot.Pos_Y == 0)
				{
					cout << "You feel a slight breeze" << endl;// this code allows the player to sense a pit nearby.
				}
				if (Robot.Pos_Y == 2)
				{
					cout << "You feel a slight breeze" << endl; // this code allows the player to sense a pit nearby.
				}
			
		}
			if (Robot.Pos_X == Gold.E_Pos_X)
			{
				if (Robot.Pos_Y == Gold.E_Pos_Y)
				{
					cout << "You Found the Gold! \nGo back to the starting square to win!\nBe careful. You will no longer be able to sense the traps." << endl;
					Gold.Exist = 0;  // this allows the player to aquire the gold if they have not already aquired it.
				}
				
			}
		}
		if (Gold.Exist == 0) // this checks to see if the gold has been aquired.
		{
			
			if (Robot.Pos_X == 0)
			{
				if (Robot.Pos_Y == 0)
				{
					cout << "You won!\n" << endl; // this allows the player to win the game if they have already aquired the gold.
					break;


				}
			}
		} 
		
		if (Robot.Pos_X >= 5 || Robot.Pos_X < 0) 
		{
			cout << "You went out of the grid and died!" << endl;
			Robot.Alive = false;// this code kills the player if they exit the grid.
			break;
		}
		if (Robot.Pos_Y >= 5 || Robot.Pos_Y < 0)
		{
			cout << "You went out of the grid and died!" << endl;
			Robot.Alive = false; // this code kills the player if they exit the grid.
			break;
		}
		if (Robot.Pos_X == 1)
		{
			if (Robot.Pos_Y == 3)
			{
				cout << "You fell into the Wumpus' trap and died!!" << endl;
				Robot.Alive = false;// this code kills the player if the player steps on a trap.
				break;

			}

		}
		if (Wumpus.Exist == 1) // this checks to see if the Wumpus is alive.
		{ 
			if (Robot.Pos_X == 1)
			{
				if (Robot.Pos_Y == 1)
				{
					cout << "You smell a terrible smell." << endl; // this code allows the player to sense the Wumpus.
				}
			}
			if (Robot.Pos_X == 2)
			{
				if (Robot.Pos_Y == 2)
				{
					cout << "You smell a terrible smell." << endl;// this code allows the player to sense the Wumpus.
				}
				if (Robot.Pos_Y == 1)
				{
					cout << "You were slain by the Wumpus!" << endl; // this code kills the player if they step on the wumpus while it is alive.
					Robot.Alive = false; // 

				}
				if (Robot.Pos_Y == 0)
				{
					cout << "You smell a terrible smell." << endl;// this code allows the player to sense the Wumpus.
				}
			}
		}
		if (Robot.Pos_X == 3)
		{
			
			if (Robot.Pos_Y == 1) 
			{
				cout << "You fell into the Wumpus' trap and died!" << endl;// this code kills the player if the player steps on a trap.
				Robot.Alive = false;
				break;
			}
			

		}
	}
}
#endif WUMPUS_H