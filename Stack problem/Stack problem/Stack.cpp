#include <iostream>
#include <stack>
#include <string>


using namespace std;

int main()
{
	stack <string> food;
	food.push("Cane's");
	food.push("Chipotle");
	food.push("Seafood");
	food.push("Italian");
	food.push("Ramen noodles");
	food.push("Chinese");
	food.push("Pizza");
		cout << "I am eating " << food.top() << endl;
	food.pop();
	food.pop();
	food.pop();
	food.pop();
	food.pop();
	cout << "But, I love " << food.top() << endl;

	
	system ("pause");
	return 0;
}