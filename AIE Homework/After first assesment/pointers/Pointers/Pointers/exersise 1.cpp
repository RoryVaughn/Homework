#include <iostream>
using namespace std;
int main()
{
	char c = 'T', d = 'S';
	char *p1 = &c;
	char *p2 = &d;
	char *p3;

	p3 = &d;
	cout << "*p3 = " << *p3 << endl; // (1)   this will print out "p3 = S"
	p3 = p1;
	cout << "*p3 = " << *p3; // (2) This will print out "p3 = T"
	cout << ", p3 = " << p3 << endl; // (3) This will print out ", p3 = 6940"
	*p1 = *p2;
	cout << "*p1 = " << *p1; // (4)This will print out "p1 = S"
	cout << ", p1 = " << p1 << endl; // (5) This will print out "p1 = 9772"




	system("pause");
	return 0;
}