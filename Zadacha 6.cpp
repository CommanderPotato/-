#include <iostream>
using namespace std;

int main()
{
	int a, b, p;
	cout << "Vyvedete stranite na pravoygylnika" << endl;
	cin >> a >> b;
	if (a > 0 && b > 0) //Stranite ne mogat da sa otricatelni chisla//
	{
		p = 2 * a + 2 * b;
		cout << "Perimetyryt na pravoygylnika e " << p << endl;
	}
	else
		cout << "Vyvedete polojitelni chisla za strani" << endl;
	system("pause");
	return 0;
}