#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word;
	cout << "Vyvedete dumata!" << endl;
	getline(cin, word);
	word = string(word.rbegin(), word.rend());
	cout << "Obyrnatata duma e " << word << endl;
	system("pause");
	return 0;
}