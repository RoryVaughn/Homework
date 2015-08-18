#include <iostream>
int main()
{
	std::cout << "this should be followed by numbers 100-0" << std::endl;


	for (int a = 100; a >= 0; a--)
	{
		std::cout << a << std::endl;
		if(a%3 = 0)
		{
			std::cout << "fizz" << std::endl;
		}
	}


	system("pause");


	return 0;
}