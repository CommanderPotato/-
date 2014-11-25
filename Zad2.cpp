#include <iostream>
using namespace std;

int main()
{
	int a, b, p = 0;
	cin >> a;
	for (b = 2; b<a; b++)
	{
		if (a%b == 0)
		{
			p = 1;
		}
	}
	if (p == 0)
		cout << "Prosto ";
	else
		cout << "Ne e prosto ";
	system("pause");
	return 0;
}