#include <iostream>
#include <cstdlib>
using namespace std;

void mensagem (void) //perceba que não há ponto-e-vírgula aqui!
{
    cout <<"Ola! Eu sou uma funcao.\n";
}

int main (void){
    mensagem (); //chamando uma função sem argumentos
    system ("pause");
    return 0;
}
