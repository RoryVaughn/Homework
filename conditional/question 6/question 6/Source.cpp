#include <iostream>


int main()
{
	float a, b, result;
	char o;

	do
	{
		std::cout << "Enter number " << std::endl;
		std::cin >> a;
		std::cout << "Insert and Operator +, -, *, /: " << std::endl;
		std::cin >> o;
		std::cout << "Enter Second Number: " << std::endl;
		std::cin >> b;

		if (o == '+') result = a + b;
		if (o == '-') result = a - b;
		if (o == '*') result = a * b;
		if (o == '/') result = a / b;
		
		std::cout << "Result the result of the equation is: " << result << std::endl;
	} while (true);

	system("pause");
	return 0;
}