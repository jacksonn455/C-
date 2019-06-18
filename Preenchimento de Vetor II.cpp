#include<iostream>
using namespace std;
int main()
{

    int t,n[1000],i,cont=0;

    cin >> t;

    for(i=0; i<=999; i++)
    {
        n[i] = cont++ % t;
    }
    for(i=0; i<1000; i++)
    {
        cout << "N[" << i <<"]" << " = " <<n[i] <<endl;
    }
}


