#include <iostream>
#include <string>

using namespace std;

int main()
{
	template<typename T>
	bool compare(T a, T b)
	{
		if (a > b)
		{
			return a;
		}
		else
		{
			return b;
		}
	};
	//template<typename T>
	//bool compare(T a = 2, T b = 2)
	//{
	//	return a > b;
	//}
	template<typename I>
	bool compare(I c, I d)
	{
		if (c < d)
		{
			return c;
		}
		else
		{
			return d;
		}
	};

	//template<typename T>
	//bool(T c, T d)
	//{
	//	if (c < d)
	//	{
	//		return c;
	//	}
	//	else
	//	{
	//		return d
	//	}
	//};

	////
	template<typename T>
	bool add(T e, T f)
	{
		int WW(T e, T f);
			return(e + f);
	};

	system("pause");
	return 0;
}