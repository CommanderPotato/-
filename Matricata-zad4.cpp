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
    int b[20][20];
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<"b ["<<i<<"]["<<j<<"]=";
            cin>>b[i][j];
        }
    }
    int c[20][20];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            cout<<c[i][j];
        }
        cout<<endl;
    }
    return 0;
}
