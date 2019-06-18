#include<iostream>
using namespace std;
int main()
{
    int n[1000],aux=0,i=0,lim=0;

    for(i=0; i<1000; i++)
    {
        cin >> n[i];
    }
    lim=999;

    while(lim>=1)
    {
        for(i=0; i<lim; i++)
        {
            if(n[i] > n[i+1])
            {
                aux = n[i];
                n[i] = n[i+1];
                n[i+1] = aux;
            }
        }
        lim=lim-1;
    }
    for(i=0; i<1000; i++)
    {
        cout << n[i] << endl;
    }
    return 0;

}
