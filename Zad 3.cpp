#include <iostream>
#include <string>
using namespace std;

int main()
{
	double o = 0;
	double GPA;
	cout << "Vuvedete ocenkite si." << endl;
	int arr[5];
	for (int i = 0; i<5; i++)
	{
		cin >> arr[i];
		o += arr[i];
	}
	GPA = o / 5;
	cout << " GPA: " << GPA << endl;
	system("pause");
	return 0;
}