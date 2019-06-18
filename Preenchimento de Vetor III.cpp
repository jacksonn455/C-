#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

    int cont=0;
    double n[102],x=0;

    cin >> x;

    n[0] = x;

    for(cont=0; cont<=99; cont++)
    {
        n[cont+1] = (n[cont]/2);
        cout << fixed << setprecision(4);
        cout << "N[" << cont <<"]" << " = " <<n[cont] <<endl;
    }

}


