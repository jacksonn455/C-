#include <bits/stdc++.h>

#define TAM 10

using namespace std;

int main() {
    int valores[TAM], menorNum = INT_MAX, i, aux, aux2;

    for(i=0; i<TAM; i++) {
        cin >> valores[i];
    }

    /// Primeiro
    for(i=0; i<TAM; i++) {
        if(menorNum > valores[i]) {
            menorNum = valores[i];
        }
    }
    cout << menorNum << endl;

    /// Segundo
    aux = menorNum;
    menorNum = INT_MAX;
    for(i=0; i<TAM; i++) {
        if((menorNum > valores[i]) && (valores[i] != aux)) {
            menorNum = valores[i];
        }
    }
    cout << menorNum << endl;

    /// Terceiro
    aux2 = menorNum;
    menorNum = INT_MAX;
    for(i=0; i<TAM; i++) {
        if((menorNum > valores[i]) && (valores[i] != aux) && (valores[i] != aux2)) {
            menorNum = valores[i];
        }
    }
    cout << menorNum << endl;

    return 0;
}
