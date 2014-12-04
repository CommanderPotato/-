#include <iostream>
using namespace std;

int main()
{
	int n;

	do {
		cout << "1 - Ednocifreno chislo" << endl;
		cout << "2 - Dvuciferno chislo" << endl;
		cout << "3 - Tricifreno chislo" << endl;
		cout << "4 - Chetiricifreno chislo" << endl;
		cout << "5 - Petcifreno chislo" << endl;

		cout << "Enter number: ";
		cin >> n;
		if (n > 0 && n < 6) break;
	} while (1);

	int a[4];
	int c;
	cout << "Enter your " << n << " digit(s) number" << endl;
	cin >> c;
	for (int i = 0; i < n; ++i) {
		a[i] = c % 10;
		c /= 10;
	}

	for (int j = n; j > 0; j--) {
		cout << a[j - 1] << endl;
	}

	system("pause");
	return 0;
}