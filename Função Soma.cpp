#include <iostream>

using namespace std;

int soma(int a, int b){
    int s;
    s = a+b;
    return s;
}

int main(){

    int a, b, resultado;

    cout << "informe a: ";
    cin >> a;
    cout << "informe b: ";
    cin >> b;

    resultado = soma(a,b);
    cout << "Soma: " << resultado << endl;

}
