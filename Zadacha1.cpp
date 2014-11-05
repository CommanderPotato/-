#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int Age, Year, FutureYear, N;
	cout << "Vyvedete na kolko godini ste" << endl;
	cin >> Age;
	cout << "Vyvedete koq godina e sega" << endl;
	cin >> Year;
	cout << "Vyvedete koq godina se chudite dali shte ste jiv" << endl;
	cin >> FutureYear;
	N = Year - FutureYear + Age;
	if (N > 100)
	{
		cout << "Pytnik ste" << endl;
	}
	else
	{
		cout << "Shte ste na " << N << "godini" << endl;
		system("pause");
		return 0;
	}
}