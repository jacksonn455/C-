#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

typedef struct {
    int dia,mes,ano;
    string nome;
} Aniver;

int compara(Aniver A, Aniver B) {
    if (A.ano == B.ano) {
        if(A.mes == B.mes) {
           if(A.dia == B.dia) {
                return(A.nome < B.nome);
            }
            return (A.dia < B.dia);
        }
         return (A.mes < B.mes);
    }
    return (A.ano < B.ano);

}

int main() {
    freopen ("struct_D.in", "r", stdin);
    int i;
    Aniver aniver [10];
    for(i = 0; i < 10; i++) {
        cin >> aniver[i].dia;
        cin >> aniver[i].mes;
        cin >> aniver[i].ano;
        cin.get();
        getline( cin, aniver[i].nome);
    }
    cout << endl << "Ordenado: " << endl;
    sort(aniver,aniver+10,compara);
    for(i = 0; i < 10; i++) {
        cout << aniver[i].dia << " ";
        cout << aniver[i].mes << " ";
        cout << aniver[i].ano << " ";
        cout << aniver[i].nome << endl;
    }
    return(0);
}
