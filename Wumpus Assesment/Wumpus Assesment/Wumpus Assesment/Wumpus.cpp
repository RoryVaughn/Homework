#include "Wumpus.h"

void MakeGrid()
{
	const int i = 4;
	const int h = 4;
	int grid[i][h] = {};


	for (int i = 0; i < 4; i++)
	{
		for (int h = 0; h < 4; h++)
		{

			cout << "x = " << i << " y = " << h << endl;

		}
		cout << endl;
	}
}


int main()
{
	MakeGrid(); //the fuction uses nested loops and an array to creat a 2D grid.




	system("pause"); //this line of code allows the console to stay open after the game is over.
	return 0;
}


