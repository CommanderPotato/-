#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double X1, X2, Y1, Y2, Distance;
	cout << "Naberete koordinatite na pyrvata tochka" << endl;
	cin >> X1 >> Y1;
	cout << "Naberete koordinatite na vtorata tochka" << endl;
	cin >> X2 >> Y2;
	Distance = (X1 - X2)*(X1 - X2) + (Y1 - Y2)*(Y1 - Y2);
	cout << "Razstoqnite mejdu dvete tochki e " << Distance << endl;
	system("Pause");
	return 0;
}