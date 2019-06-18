#include <iostream>
#include <map>
#include <cstdio>

using namespace std;

int main () {
    freopen("mapa.in","r",stdin);

    map <string,double> mapa;
    int N;
    string nome;
    double altura;
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> nome >> altura;
        mapa[nome]=altura;
    }

    cin  >> N;

    for (int i=0; i<N; i++) {
        cin >> nome;
        cout << "Altura de " << nome << " = " << mapa[nome] << endl;
    }
    return 0;
}
