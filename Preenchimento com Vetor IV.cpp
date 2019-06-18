#include <iostream>
#include <cmath>


using namespace std;

int main() {

    int par[5], impar[5], N, contpar=0, contimp=0;

    for (int i=0; i<15; i++) {
        cin >> N;
        if (N%2==0) {
            par[contpar] = N;
            contpar++;
            if (contpar==5) {
                for (int j=0; j<5; j++) {
                    cout << "par["<< j << "] = " << par[j] << endl;
                }
                contpar=0;
            }
        } else {
            impar[contimp] = N;
            contimp++;
            if (contimp==5) {
                for (int j=0; j<5; j++) {
                    cout << "impar["<< j << "] = " << impar[j] << endl;
                }
                contimp=0;
            }
        }
    }
    for (int j=0; j < contimp; j++) {
        cout << "impar["<< j << "] = " << impar[j] << endl;
    }
    for (int j=0; j < contpar; j++) {
        cout << "par["<< j << "] = " << par[j] << endl;
    }

}
