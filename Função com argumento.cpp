#include <iostream>
#include <cstdlib>
using namespace std;

int somar (void){
    int a, b, resultado;
    cout <<"Digite um numero:\n";
    cin >> a;
    cin.ignore ();
    cout <<"Digite mais um numero:\n";
    cin >> b;
    cin.ignore ();
    resultado=a+b;
    return resultado; //valor que será retornado
}

int main (void){
    int resultadoDaFuncao;
    resultadoDaFuncao= somar(); //gravando o resultado da função em uma variável
    cout <<"\nO resultado da funcao e "<<resultadoDaFuncao<<"\n";
    system ("pause");
    return EXIT_SUCCESS;
}
