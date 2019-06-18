#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int contprimos=0, divisores=0, i, primos[30],n;
    cin >> n;
    while(contprimos < 30) {
        divisores=0;
        for(i=1; i <= sqrt(n) and divisores < 2; i++) {
            if(n%i == 0) {
                divisores++;
            }
        }
        if(divisores==1) {
            primos[contprimos]=n;
            cout << primos[contprimos] << " eh primo" << endl;
            contprimos = contprimos +1;
        }
        n = n +1;
    }
    return 0;
}
