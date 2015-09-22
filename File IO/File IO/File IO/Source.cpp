//#include <iostream>
//#include <fstream>
//using namespace std;
//void main()
//{
//	ofstream file;
//
//	file.open("MyLog.txt", ios_base::out);
//	if (file.is_open())
//	{
//		//Safe to write to file
//		file << "Hello World" << endl;//		
//	}file.close();
//	system("pause");
//	return 0;
//}

//1. Implement a program that will allow a user to view and alter a text file from the command
//console.The program should do the following :
//a.Open a text file called “MyLog.txt”, or create one if it doesn’t exist.
//b.Ask the user if they want to display, write, or clear the file, or exit the program.
//i.Display : Print the contents of the file to the console.
//ii.Write : Ask the user for input and append whatever they write to the end of
//the file.
//iii.Clear : Erase the contents of the file by creating a new blank one in its place.
//iv.Exit : Close the program.
//c.After the user completes their selection, they should be prompted for what they
//want to do next, for example they could continue to write more lines to the file.
//d.The contents of the file should not be erased when the program starts, so something
//entered previously should still be viewable if the program is closed and restarted.
#include <iostream>
#include <string>
#include <fstream>
using namespace std;



int main() {
	int select;//this variable collects the input for the function the user wants to select.
	cout << "Select the function you wnat to use \n1 = Display, 2 = write, 3 = clear, 4 = exit" << endl;
	cin >> select;
	switch (select)
	{
	case 1:
		{
			ifstream myfile;
			string stuff;
			myfile.open("MyLog.txt");
			if (myfile.is_open())
			{
				while (!myfile.eof())
				{
					getline(myfile, stuff);//gathers info in the text file.
					cout << stuff << endl;//prints the contents of the text file to the screen of the console,

				}
				myfile.close();
			}
			else
			{
				cout << "we messed up";
			}
		}
		break;
	case 2:
	{
		ofstream myfile;
		string write;
		bool writefunt = true;
			myfile.open("MyLog.txt", ios_base::app);
			if (myfile.is_open())
			{

				//Safe to write to file
				while (writefunt == true)
				{
					
					getline(cin, write);//gathers all the information in order to print write it to the text file.
					myfile << write << endl;				}				
			}
			myfile.close();
			
		
	}
	break;
	case 3:
	{
		ofstream myfile;
		string empty = ""; //This string is empty in order to clear the text file.
		myfile.open("MyLog.txt", ios_base::out);
		if (myfile.is_open())
		{
			myfile << empty << endl;//applies a blank string to file, essentially overiding and deleting it.

		}
		myfile.close();
		system("cls");
	}
	break;
	default:
	{
		return 0; //anything presses besides 1, 2, or 3 will close the program.
	}
	break;
	}
	system("pause");
	
	
	return 0;
}