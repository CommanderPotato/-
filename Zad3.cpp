#include <iostream>
using namespace std;

int main()
{
	int c;
	cin >> c;
	int A[4];
	for (int i = 0; i<4; ++i){
		A[i] = c % 10;
		c /= 10;
	}
	for (int i = 3; i >= 0; --i){
		cout << A[i] << "\t";
	}
	system("pause");
	return 0;
}