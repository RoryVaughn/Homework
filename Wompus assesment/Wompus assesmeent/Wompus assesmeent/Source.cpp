#pragma once
#include <iostream>
#include <string>
using namespace std;
struct Player
{
	string name;
	int i;
	int h;
	bool alive;
};
class Hero
{
public:
	Hero(int, int);
	void Travel(int, int, bool);
private:

};
Hero::Hero(int i, int h)
{

}

void Hero::Travel()
{
	Player Hero;
	Hero.i = 0;
	Hero.h = 0;
	Hero.alive = 1;

	cout << "(" << i << ")" << "(" << h << ")" << endl;
};



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
	MakeGrid();

	Player Hero();
	Hero.Travel();


	system("pause"); //this line of code allows the console to stay open after the game is over.
	return 0;
}
