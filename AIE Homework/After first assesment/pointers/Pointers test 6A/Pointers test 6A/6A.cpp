#include <iostream>
//Rory Vaughn
//Excersise 6 in pointes
//Teacher: Matthew Williamson
//9/15/2015
using namespace std;



int main()
{
	const int size = 5; //this int will be used for the size of the char array
	char* hello[size] = {"H","e","l","l","o"}; //This is the array that will be used in the reverse function
	int i; //this int will be used in a loop to reverse the array.
	int h; //this int is used to display each version of the array
	void RevString();
	{
		for (h = 0; h < size; h++)
		{
			cout << endl;
			for (i = 0; size > i; i--)//I tried placing (% 2) after the ++i
			{
				cout << *(hello[i]) << " "; // I seem to be getting somewhere with the % 2 here,
				//however i am stil unsure of which step to take next (or if the % 2 has anything to do with this at all.)
				//

			}
		}
	}

	


	system("pause");
	return 0;
}
