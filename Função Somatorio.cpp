/*Escreva um programa em c++ que leia um valor x1, interpretado pelo usuario
O programa deve calcular o somatorio de 1 ate x1 utilizando o void somatorio (int n, int &soma)*/

#include <iostream>
using namespace std;
void somatorio  (int n, int &soma);
int main () {
 int x1,soma,i;

 cout << " informe x1: ";
 cin >> x1;

for (i=1; i<=n; i++) {
 soma = soma+i;
}
    int main () {
    int x1, soma;
    cout << " Digite x1: ";
    cin >> x1;
    soma = 0;
    somatorio (x1, soma)
    cout << " Somatoria dos valores eh: " << endl;
    cout << soma;
    return 0;
}
}
