#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

typedef struct  {
    string Nome;
    int Id;
    string Depto;
    char Genero;
} Estudante;

bool ordena (Estudante A, Estudante B) {
    if (A.Depto == B.Depto) {
       if (A.Genero == B.Genero) {
           return A.Nome > B.Nome;
       }
       return (A.Genero < B.Genero);
    }
    return (A.Depto < B.Depto);
}

int main() {
    freopen("alunos.in", "r", stdin);
    Estudante Turma[5];
    for (int i=0; i<5; i++) {
        getline (cin , Turma[i].Nome);
        cin >> Turma[i].Id;
        cin >> Turma[i].Depto;
        cin >> Turma[i].Genero;
        cin.get();
    }
    for (int i=0; i<5; i++) {
        cout << Turma[i].Nome << " - " << Turma[i].Id << " - " ;
        cout << Turma[i].Genero << " - " << Turma[i].Depto << endl;
    }
    sort (Turma, Turma+5, ordena);
    cout << endl;
    for (int i=0; i<5; i++) {
        cout << Turma[i].Nome << " - " << Turma[i].Id << " - " ;
        cout << Turma[i].Genero << " - " << Turma[i].Depto << endl;
    }
    return(0);
}
