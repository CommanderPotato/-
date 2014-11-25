#include <iostream>
#include <string>
using namespace std;

int main()
{
	string names[10];
	cout << "Vuvedete imenata na suychenicite si po nomer v klasa." << endl;
	for (int i = 0; i < 10; i++)
	{
		getline(cin, names[i]);
	}
	cout << "Imenata na suychenicite vi: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << names[i] << endl;
	}
	system("pause");
	return 0;
}