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
/// Ordem de Curso (Computacao, Filosofia etc.
/// Dentro do Curso, por ordem de Nome do estudante
bool Ordena (Estudante A, Estudante B) {
   if (A.Curso == B.Curso) {
      return A.Nome < B.Nome;
   }
   return A.Curso < B.Curso;
}

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

    sort (Turma, Turma+5, Ordena);

    for (int i=0; i<5; i++) {
        cout << Turma[i].Nome << " - " << Turma[i].Id << " - "
        << Turma[i].Curso << " - " << Turma[i].Sexo << endl ;
    }
    return(0);
}
