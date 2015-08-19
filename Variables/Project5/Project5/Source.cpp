#include <iostream>
int main()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	float sum;
	float ave;
	int enter;

	std::cout << "enter the first number to be averaged" << std::endl;
	std::cin >> a;
	std::cout << "enter the second number to be averaged" << std::endl;
	std::cin >> b;
	std::cout << "enter the third number to be averaged" << std::endl;
	std::cin >> c;
	std::cout << "enter the fourth number to be averaged" << std::endl;
	std::cin >> d;
	std::cout << "enter the fifth number to be averaged" << std::endl;
	std::cin >> e;

	sum = a + b + c + d + e;
	ave = sum / 5;

	std::cout << "The average of the five numbers is " << ave << std::endl;
	std::cin >> enter;




	return 0;
}