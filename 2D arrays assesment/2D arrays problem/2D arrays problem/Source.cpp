#include <iostream>

const int i = 3;
const int h = 6;
using namespace std;
int main()
{
	
	char name[i][h] = { {'R', 'o', 'r', 'y'},
					   {'J', 'o','h', 'n'},
					   {'V', 'a', 'u', 'g', 'h', 'n'} };
					   

	for (int i = 0; i < 3; i++)
	{
		for (int h = 0; h < 6; h++)
		{
			if ((int)name[i][h] != 0)
			{
				cout << (int)name[i][h] << " ";
			}
		}
		cout << endl;
	}

	system("pause");
	return 0;
}
