#include<iostream>
#include<iomanip>
#include<cstdio>
using namespace std;


int main() {
    //freopen("testando.in.c","r",stdin);

    int i,j,k=0;
    double M[12][12],S=0,x=0,med=0,aux;
    char O;

    cin >> O;

    for(i=0; i<12; i++) {
        for(j=0; j<12; j++) {
            cin >> M[i][j];
        }
    }

    aux=0;
    for(i=7; i<=11; i++) {
        for(j=12-i; j<=i-1; j++) {
            S += M[i][j];
            aux = aux + 1;
        }
    }




    cout << fixed << setprecision(1);

    if(O=='S') {
        cout << S <<endl;
    } else {
        med = S /aux;
        cout << med << endl;
    }

    return 0;
}
