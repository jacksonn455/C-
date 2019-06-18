#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

typedef struct Estudante {
    string Nome;
    int Id;
    string Curso;
    char Sexo;
};

int main() {
    Estudante Turma[5];
    freopen("alunos.in","r",stdin);
    for (int i=0; i<5; i++) {
        getline (cin , Turma[i].Nome);
        cin >> Turma[i].Id;
        cin >> Turma[i].Curso;
        cin >> Turma[i].Sexo;
        cin.get();
    }

    for (int i=0; i<5; i++) {
        cout << Turma[i].Nome << ", num. " << Turma[i].Id;
        cout << ", curso " << Turma[i].Curso;
        cout << ", sexo " << ((Turma[i].Sexo=='M')?"Masculino":"Feminino") << endl ;
    }
    return(0);
}
