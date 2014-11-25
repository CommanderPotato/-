#include <iostream>
using namespace std;

int main()
{
	char ch;
	cin >> ch;
	if (ch >= '0' && ch <= '9')
		cout << "Simvolyt e cifra" << endl;
	if (ch >= 97 && ch <= 122)
		cout << "Simvolyt e malka bukva" << endl;
	if (ch >= 'A' && ch <= 'Z')
		cout << "Simvolyt e glavna bukva" << endl;
	system("pause");
	return 0;
}