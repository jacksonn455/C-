#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int j,i,n,m[100][100];
    cin >> n;
    while(n)
    {
        int valor=0;
        while(valor<n-valor)
        {
            for(i=valor; i<n-valor; i++)
            {
                for(j=valor; j<n-valor; j++)
                {
                    m[i][j]=valor+1;
                }
            }
            valor++;
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(j!=0)cout<<" ";
                cout<< setw(3) << m[i][j];
            }
            cout << endl;
        }
        cout << endl;
        cin >> n;
    }
    return 0;
}
