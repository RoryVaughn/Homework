#include <iostream>
int main()
{	
	char first, second, answer;
	int ave;
	

	std::cout << "This program with find the letter inbetween two letters" << std::endl;
	std::cout << "enter the first letter" << std::endl;
	std::cin >> first;
	std::cout << "enter the second letter" << std::endl;
	std::cin >> second;

	ave = (first + second) / 2;
	answer = char(ave);

	


	std::cout << "The middle letter of the two given letters is " << answer << std::endl;
	

	system("pause");




	return 0;
}