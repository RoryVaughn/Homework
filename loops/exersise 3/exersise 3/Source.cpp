#include <iostream>
int main()
{
	int b = 0;
	std::cout << "derp" << std::endl;


	for (int a = 1000; a >= 0; a--)
	{

		
		if (a % 3 == 0 && a != 0)
		{
			b = b + a;
		}
		if (a % 5 == 0 && a != 0)
		{
			b = b + a;
		}
		if (a % 15 == 0 && a != 0)
		{
			b = b - a;
		}
	}

	std::cout << b << std::endl;
	system("pause");


	return 0;
}