#include <iostream>
int main()
{

	int a;
	std::cout << "You can only choose numbers 1-4." << std::endl;
	std::cin >> a;

	switch (a)
	{
	case 1:
		std::cout << "1" << std::endl;
	break;
	case 2:
		std::cout << "2 or 3" << std::endl;
	break;
	case 3:
		std::cout << "2 or 3" << std::endl;
		break;
	case 4:
		std::cout << "4" << std::endl;
	break;
	default:
		std::cout << "Invalid" << std::endl;
	}
	system("pause");
	return 0;
}
