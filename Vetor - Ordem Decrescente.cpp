#include<iostream>


using namespace std;

int main() {



    int A[10],aux=0,i=0,lim=0;

    for(i=0; i<10; i++) {
        cin >> A[i];
    }
    lim=9;

    while(lim>=1) {
        for(i=0; i<lim; i++) {
            if(A[i] < A[i+1]) {
                aux = A[i];
                A[i] = A[i+1];
                A[i+1] = aux;
            }
        }
        lim=lim-1;
    }
    for(i=0; i<10; i++) {
        cout << A[i] << endl;
    }
    return 0;

}
