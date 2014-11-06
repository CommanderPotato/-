#include <iostream>
using namespace std;

int main()
{
	char ch;
	cin >> ch;
	if (ch >= '0' && ch <= '9')
		cout << "Simvolyt e cifra" <<endl;
	if (ch >= 97 && ch <= 122)
		cout << "Simvolyt e malka bukva" <<endl;
	if (ch >= 'A' && ch <= 'Z')
		cout << "Simvolyt e glavna bukva" <<endl;
	system ("pause");
	//zad2
	int a,b,p=0;
	cin >>a;
	for (b=2; b<a; b++)
	{
		if (a%b==0)
		{
		p=1;
		}
	}
		if (p==0)
			cout << "Prosto";
		else
			cout << "Ne e prosto";
		system("pause");
	//zad3
	int c;
	cin>>c;
	int A[4];
	for(int i=0;i<4;++i){
		A[i]=c%10;
		c/=10;
	}
	for(int i=3;i>=0;--i){
		cout<<A[i]<<"\t";
	}
	system ("pause");
	return 0;
}
	//zad4
	
