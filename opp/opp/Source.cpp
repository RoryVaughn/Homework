#include <iostream>
class example
{
public:
	int a;
	int b;
	example operator+(const example& obj);
	void operator=(const example& obj);
};

void example::operator=(const example& obj)
{
	(*this).a = obj.a;
	(*this).b = obj.b;

	return;
}

example example::operator+(const example& obj2)
{
	example tmp_obj = *this;
	tmp_obj.a = tmp_obj.a + obj2.a;
	tmp_obj.b = tmp_obj.b + obj2.b;
	return tmp_obj;
}

int main(void)
{
	example obj1, obj2, obj3;

	obj1.a = 1;
	obj1.b = 1;

	obj2.a = 2;
	obj2.b = 2;

	obj3.a = 0;
	obj3.b = 0;

	obj3 = obj1 + obj2;

	std::cout << obj3.a << "  " << obj3.b << "\n";

	system ("pause");
	return 0;
}