#include <iostream>
#include <string>
using namespace std;

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