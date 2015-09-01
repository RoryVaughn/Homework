/*
2. Create an instance of the Player structure.
	Ask the user to input a name and score.
	Store the user’s input into the member variables of the structure.
	Then output the name and score in the Player structure.
3. Pull the code you wrote for question 2 out into a function that creates and
	then returns the player the user created.
4. Create an array of 5 Player structures.
	Loop through each Player and ask the user to input the Player’s name and score
	and store them in each of the 5 Player structures.
	Do this step using the function you wrote in question 3.
	Then loop through the 5 players and output each of their names and scores
*/
#include <string>
#include <iostream>

using namespace std;
struct Player
{
	string name;
	int score;
};

void PrintADude(Player);
Player MakeADude(string, int);
int main()
{
	string userInput;
	int userScore;

	
//	Player theDude = MakeADude(userInput, userScore);
	
	//0 - 4
	// 0 1 2 3 4
	Player theDudeArray[5];
	//Player0 Player1 Player2 Player3 Player4\
	//  name	  name   name    name     name
	//  score	  score  score   score    score
	
	for (int i = 0; i < 5; i++)
	{
		//===get user input====
		cout << "Enter name: \n";
		cin >> userInput;
		cout << "Enter Score \n";
		cin >> userScore;
		//===end user input===
		//assign the value
		theDudeArray[i] = MakeADude(userInput, userScore);		
	}

	for (int i = 0; i < 5; i ++)
		PrintADude(theDudeArray[i]);
system("pause");
}

Player MakeADude(string n, int s)
{
	Player p;
	p.name = n;
	p.score = s;
	//@loop 0 n == dylan| s == 9
	//return p

	return p;
}

void PrintADude(Player d)
{
	cout << "The name is: " << d.name << " with score " << d.score <<endl;	
}