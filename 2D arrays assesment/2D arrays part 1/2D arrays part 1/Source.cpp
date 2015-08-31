#include <iostream>

const int i = 5;
const int h = 5;
using namespace std;
int main()
{
	
	char name[i][h] = { {'m','y'},
						{'n', 'a', 'm', 'e'},
						{'i', 's'},
						{'j', 'e', 'f', 'f'} };

	for (int i = 0; i < 5; i++)
	{
		for (int h = 0; h < 5; h++)
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
