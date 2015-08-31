#include <iostream>

const int i = 3;
	const int h = 6;
using namespace std;
int main()
{
	
	char name[i][h] = { {'r', 'o', 'r', 'y'},
					   {'j', 'o','h', 'n'},
					   {'v', 'a', 'u', 'g', 'h', 'n'} };
					   


	
	
	


	
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
