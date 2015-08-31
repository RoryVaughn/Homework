#include "Date.h"


Date::Date(int a, int b, int c)
{
	d = a;
	m = b;
	y = c;
}


void Date::stuff()
{
	std::cout << d << "/" << m << "/" << y << std::endl;
}