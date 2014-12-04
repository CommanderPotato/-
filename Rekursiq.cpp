#include <iostream>
#include <math.h>
using namespace std;

int fact(int n)
{
    if (n==1) return 1;
    else return n*fact(n-1);
}

int fib(int a)
{
    if (a<=1) return 1;
    else return fib(a-1)+fib(a-2);
}

int sum(int b)
{
    if (b/10==0) return b;
    else return b%10 + sum(b/10);
}

int stepen(int a,int b)
{
    if(a==1||b==0) return 1;
    else return pow(a,b);
}

bool chislo(int n,int k)
{
    if (n%10 == 0 && n != k) return false;
    else if (n==k) return true;
    else if(n%10==k) return true;
    else return chislo(n/10,k);
}
int main()
{
    int k;
    cout << "Chisloto K!"<< endl;
    cin >> k;
    int n;
    cout << "Chisloto N!"<<endl;
    cin >> n;
    cout << chislo(n,k) <<endl;
    return 0;
}

