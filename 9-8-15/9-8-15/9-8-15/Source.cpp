#include <iostream>
using namespace std;
int dostuff()
{
	float a; //This declares the float "a"
	float b; //This declares the float "b"
	float c; //This declares the float "c"
	cin >> a; //this takes in a value for float "a"
	cin >> b; //this takes in a value for float "b"
	(c = a + b); //This assigns the float "c", the value of a + b
	return c; //this returns the float c for the function "dostuff"
}

int main()
{
	dostuff();

	system("pause"); //this line of code allows the console to 
		return 0;
}
