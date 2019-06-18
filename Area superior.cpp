#include<iostream>
#include<iomanip>
#include<cstdio>
using namespace std;


int main() {
    //freopen("testando.in.c","r",stdin);

    int i,j;
    double M[12][12],S=0,x=0,med=0,aux;
    char O;

    cin >> O;

    for(i=0; i<12; i++) {
        for(j=0; j<12; j++) {
            cin >> M[i][j];
        }
    }

    aux=0;
    for(i=0; i<=4; i++) {
        for(j=i+1; j<=10-i; j++) {
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






