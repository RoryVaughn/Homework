//#include <iostream>
//#include <fstream>
//using namespace std;
//void main()
//{
//	ofstream file;
//
//	file.open("MyLog.txt", ios_base::out);
//	if (file.is_open())
//	{
//		//Safe to write to file
//		file << "Hello World" << endl;//		
//	}file.close();
//	system("pause");
//	return 0;
//}
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream myfile;
	myfile.open("MyLog.txt");
	myfile << "Writing this to a file.\n";
	myfile.close();
	return 0;
}