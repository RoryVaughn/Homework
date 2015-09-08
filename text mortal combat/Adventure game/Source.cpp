#include "classData.h"

int main()
{
	int i;
	cout << "Welcome to Get Rekt Scrub!" << endl;
	cout << "Choose your class: (Tank = 1, Assasin = 2, Warrior = 3) \n";
	cin >> i;
	
		switch (i)
		{
			case 1:
			{Tank Tank(0, 10, 5);
			Tank.Combat();
			break; 
			}
			case 2:
			{
				Assasin Assasin(5, 0, 10);
				Assasin.Combat1();
				break;
			}
			case 3:
			{Warrior Warrior(10, 0, 5);
			Warrior.Combat2();
			break;
			}
		}

	








	system("pause");
	return 0;
}