#include <iostream>
int main()
{
	int a;
	int b;

	std::cout << "enter the first number" << std::endl;
	std::cin >> a; 
	std::cout << "enter the second number" << std::endl;
	std::cin >> b;

	if (a >= b)
	{
		std::cout << a << " is the larger number." << std::endl;
	}
	
	
	else
	{
		std::cout << b << " is the larger number." << std::endl;
	}









	system("pause");
	return 0;
}
