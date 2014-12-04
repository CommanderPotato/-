#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, maxage, minage;
	cout << "Vuvedete kolko priqteli imate." << endl;
	cin >> n;
	int p[100];
	cout << "Vuvedete, na kolko godini sa priqtelite vi." << endl;
	for (int i = 0; i<n; i++)
	{
		cin >> p[i];
	}
	maxage = p[0];
	minage = p[0];
	for (int i = 0; i<n; i++)
	{
		if (p[i]>maxage) maxage = p[i];
		if (p[i]<minage) minage = p[i];
	}
	cout << "Nai-stariqt e na " << maxage << " godini, a nai-mladiqt e na " << minage << " godini." << endl;
	system("pause");
	return 0;
}