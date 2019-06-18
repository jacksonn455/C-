#include <iostream>
#include <cstdlib>
using namespace std;

//criando o protótipo de 4 funções
int somar (int x, int y);
int subtrair (int x, int y);
int multiplicar (int x, int y);
int dividir (int x, int y);

//a função principal
int main (void){
    int valor1, valor2, resSom, resSub, resMult, resDiv;
    cout <<"Digite o 1o valor: ";
    cin >> valor1;
    cin.ignore();
    cout <<"Digite o 2o valor: ";
    cin >> valor2;
    cin.ignore ();

    //chamando todas as funções
    resSom=somar (valor1, valor2);
    resSub=subtrair (valor1, valor2);
    resMult=multiplicar (valor1, valor2);
    resDiv=dividir (valor1, valor2);

    //mostrando os resultados guardados
    system ("cls");
    cout <<valor1<<" + "<<valor2<<" = "<<resSom<<"\n";
    cout <<valor1<<" - "<<valor2<<" = "<<resSub<<"\n";
    cout <<valor1<<" * "<<valor2<<" = "<<resMult<<"\n";
    cout <<valor1<<" / "<<valor2<<" = "<<resDiv<<"\n\n";
    system ("pause");
    return EXIT_SUCCESS;
}

//As funções
int somar (int x, int y){
    return x+y;
}

int subtrair (int x, int y){
    return x-y;
}

int multiplicar (int x, int y){
    return x*y;
}

int dividir (int x, int y){
    return x/y;
}
