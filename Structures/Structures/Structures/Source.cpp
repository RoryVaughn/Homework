#include <iostream>
#include <string>
using namespace std;
struct position
{
	float x = 75.3f;
	float y = 5.37f;
};

struct velocity
{
	float size;
	float direction;
};
struct player
{	
	string name;
	int health;
	int score;
	position p;
	velocity v;
	

};



void main()
{	
	player Udyr;
	string name = "Udyr";
	Udyr.health = 100;
	Udyr.score = 0;
	Udyr.p = { 75.3f, 5.37f };
	Udyr.v = { 0,0 };
	
	cout << "Udyr has " << Udyr.health << " health" << endl;
	cout << "Udyr has " << Udyr.score << " score" << endl;
	cout << "Udyr's postion is " << Udyr.p << endl;

	
	
	
	







	system("pause");




	
}