#include <iostream>
#include <string>
using namespace std;




//// If you cannot do the following problem please see me or a T.A. 
//This is to be started in the first hour of class by yourself, DO NOT ask another student how to solve this problem.
//1a) Write a function that converts a string to it's ASCII equivalent.
//1b) For every last letter of that string replace it with a smiley face emoji. (Its in the ASCII chart)
//2) Use this function, in some way, populate a 2D array that will contain your first middle and last name as their ASCII equivalents.I say somehow as different implementations could do different things.As long as you are writing your own code and accomplishing this task you will have passed this part of the assessment.
//Skills Required : Loops, Variable Assignment, Character Manipulation, Functions, Conditionals.
int main()
{
	char name1[30];
	char names[5][30];


	//cout << "Enter your first and last name." << endl;
	//for (int i = 0; i < 5; i++)
	//{
	//	cin.getline(name1, 30);
	//	for (int j = 0; j < 30; j++)
	//	{
	//		names[i][j] = name1[j];
	//	}
	//}

	//for (int a = 4; a >= 0; a--)
	//{
	//	for (int b = strlen(names[a]); b >= 0; b--)
	//	{
	//		cout << names[a][b];
	//	}
	//	cout << endl;
	//}
	

	cout << "Enter a name:" << endl;
	for (int h = 0; h < 5; h++)
	{
		cin.getline(name1, 30);
		for (int i = 0; i < 30; i++)
		{
			names[h][i] = name1[i];
		}
	} 
	for (int a = 4; a <= 0; a--)
	{
		for (int b = strlen(names[a]); b >= 0; b--)
		{
			cout << names[a][b];
		}
		cout << endl;
	}


	//for (int a = 0; a < strlen(name1); a++)
	//{
	//	cout << name1[a];
	//}

	

		//cout << endl;
	




	system("pause");
	return 0;
}