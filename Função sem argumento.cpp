#include <iostream>
#include <cstdlib>
using namespace std;

void mensagem (void) //perceba que n�o h� ponto-e-v�rgula aqui!
{
    cout <<"Ola! Eu sou uma funcao.\n";
}

int main (void){
    mensagem (); //chamando uma fun��o sem argumentos
    system ("pause");
    return 0;
}
