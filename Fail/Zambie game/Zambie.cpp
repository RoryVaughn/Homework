#include "Zambie.h"

void MakeGrid()
{
	const int i = 4;
	const int h = 4;
	int grid[i][h] = {};


	for (int i = 0; i < 4; i++)
	{
		for (int h = 0; h < 4; h++)
		{

		}

	}
}


int main()
{
	cout << "Welcome to Zambiez! \nYou can travel in a 4x4 grid of squares.\nWatch out for your old neighbors\n";
	cout << "Controls : \n8: Face North, 2: Face South, 4: Face West, \n";
	cout << "6: Face East, 5: Shoot a bullet, \n0: Move in the direction the character is facing. \n \n" << endl;
	cout << "Your journey for neighborhood domination begins\n in the square (0,0), facing North.\n " << endl;

	MakeGrid(); //the fuction uses nested loops and an array to create a 2D grid.
	int start = 1;
	switch (start)
	{
	case 1:
	{Zombie Zombie(0, 0, 8);
	Zombie.Gameplay();
	break;

	}

	}
	int retry;
	cout << "enter 1 to retry or anything else to quit." << endl;
	cin >> retry;
	switch (retry)
	{
	case 1:
	{
		{system("cls");
		return main(); }
	}
	default:
	{return 0; }

	}
	system("pause"); //this line of code allows the console to stay open after the game is over.

	return 0;
}


