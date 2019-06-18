#include<iostream>
using namespace std;
int main()
{
    int a=0,b=0,c=0,aux=0;
    cin >> a >> b >> c;

    if(a>b) // 3 variaveis 3 ifs, 4 variaveis 6 ifs, 5 variaveis 11 ifs
    {
        aux = a;
        a = b;
        b = aux;
    }
    if(b>c)
    {
        aux = b;
        b = c;
        c = aux;
    }

    if(a>b)
       {
        aux = a;
        a = b;
        b = aux;
       }
    cout << a << " " << b << " " << c <<endl;
}
