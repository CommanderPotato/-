#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cout << "Broi redove " << endl;
    cin>>n;
    cout << "Broi stylbove " << endl;
    cin>>m;

    int a[20][20];
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<"a ["<<i<<"]["<<j<<"]=";
            cin>>a[i][j];
            }
    }
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    int b[20][20];
    int c=5;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            b[i][j]=a[i][j]*c;
            cout<<b[i][j];
        }
        cout<<endl;
    }
    return 0;
}
