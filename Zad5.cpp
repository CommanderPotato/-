#include <iostream>
#include <string>
using namespace std;

int main()
{
	string number;

	cout << "Enter a number: ";
	cin >> number;

	if (number == string(number.rbegin(), number.rend())) { //number r.begin i number.rend obryshtat chisloto simetrichno i proverqva dali stoinostite na vsqka edna kletka syvpadat s predishnite zapazeni v inputa//
		cout << number << " IS a palindrome" << endl;
	}
	else {
		cout << number << " IS NOT a palindrome" << endl;
	}

	system("pause");
}