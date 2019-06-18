#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>

using namespace std;

int main () {
    cout<<fixed<<setprecision(1);
       double M[12][12],soma=0;
    int i,j,n;
    char caracter;
    cin>>caracter;
    for (i=0; i<12; i++) {
        for(j=0; j<12; j++) {
            cin >> M[i][j];
        }
    }
    for (i=1; i<12; i++) {
        for (j=0; j<12; j++) {
            if (i<j && (11-i) < j){
                soma = soma + M[i][j];
            }
        }
    }
    if(caracter == 'S'){
        cout<<soma<<endl;
    }else if(caracter == 'M') {
        soma/=12;
        cout<<soma<<endl;
    }
}
