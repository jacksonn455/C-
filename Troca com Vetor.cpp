#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{

    int n[20];
    int aux,i,j;

    for(i = 0; i < 20; i++)
    {
        cin >> n[i];
    }

    for(i = 0, j = 19; i<10; i++, j-- )
    {
        aux = n[j];
        n[j] = n[i];
        n[i] = aux;
    }

    for( i = 0; i < 20; i++)
    {
        cout << "N[" << i <<"]" << " = " <<n[i] <<endl;
    }
    return 0;
}
