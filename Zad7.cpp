#include <iostream>
using namespace std;

int main()
{
	int x, maxpoints, minpoints, max1 = 1, min1 = 1;
	cout << "Vuvedete broq na ychastnicite: " << endl;
	cin >> x;
	int a[20];
	for (int i = 0; i<x; i++)
	{
		cout << "Vuvedete tochkite na " << i + 1 << "-iq uchastnik" << endl;
		cin >> a[i];
	}
	maxpoints = a[0];
	minpoints = a[0];
	for (int i = 0; i<x; i++)
	{
		if (maxpoints<a[i]) { maxpoints = a[i]; max1 = i + 1; }
		if (minpoints>a[i]) { minpoints = a[i]; min1 = i + 1; }
	}
	cout << "Ychastnikut s nai-mnogo tochki e s nomer : " << max1 << ", i ima tochki : " << maxpoints << endl;
	cout << "Ychastnikut s nai-malko tochki e s nomer : " << min1 << ", i ima tochki : " << minpoints << endl;
	system("pause");
	return 0;
}