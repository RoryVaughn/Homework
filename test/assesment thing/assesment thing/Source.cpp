#include <iostream>
#include <string>
using namespace std;
int main()
{
	char rory [4] = ;
	// I do not know how to typecast.
	//I dont know the correct syntax to assign each bit as something else.
	//I could most likely finish question #2 in the assesment.
	
	cout << "Enter rory" << endl;
	for (int h = 0; h < 4; h++)
	{
		cin.getline(rory, 30);
		cout << rory;
	}

	








	system("pause");
	return 0;
}


//1a) Write a function that converts a string to it's ASCII equivalent.
//1b) For every last letter of that string replace it with a smiley face emoji. (Its in the ASCII chart)
//2) Use this function, in some way, populate a 2D array that will contain your first middle and last name as their ASCII equivalents.
//I say somehow as different implementations could do different things.
//As long as you are writing your own code and accomplishing this task you will have passed this part of the assessment.
//Skills Required : Loops, Variable Assignment, Character Manipulation, Functions, Conditionals.