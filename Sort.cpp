#include <iostream>
#include <algorithm>
#include <cstdio>
#include <sstream>

using namespace std;

///stable sort
typedef struct {
    int tam;
    int pos;
    string nome;
} Palavra;

bool ordena(Palavra a, Palavra b) {
   if (a.tam==b.tam) {
       return a.pos < b.pos;
   }
   return a.tam < b.tam;
}

int main() {
   Palavra elementos[10];
   string linha, palavra;
   getline (cin,linha);


   stringstream S(linha);

   int cont=0;
   while (S >> palavra) {
      cout << palavra << endl;
      elementos[cont].nome = palavra;
      elementos[cont].pos = cont;
      elementos[cont++].tam = palavra.size();

   }

   sort (elementos, elementos+cont, ordena);


   cout << endl;
   for (int i=0; i<cont; i++) {
      cout <<  elementos[i].nome << endl;
      cout << elementos[i].pos << endl;
      cout << elementos[i].tam << endl;
   }

   return 0;
}



