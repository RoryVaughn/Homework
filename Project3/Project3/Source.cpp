#include <iostream>

int main()
{
	int a;
	int b;
	int olda;

	std::cout << "Enter a number for A" <<std::endl ;
	std::cin >> a;//54
	std::cout << "Enter a number for B" << std::endl;
	std::cin >> b;//64

	olda = a;
	a = b;
	b = olda;

	std::cout << "The new value for A is" << std::endl;
	std::cout << a << std::endl;
	std::cout << "The new value for B is" << std::endl;
	std::cout << b << std::endl;


	system("pause");
	return 0;
}