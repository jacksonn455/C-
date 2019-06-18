#include <iostream>

using namespace std;


void fatorial(int *A,int *B){
    int i,j,f;

    for (i = 0; i <= 9; i++)
    {
        f = 1;

        for (j = 1; j <= A[i]; j++)
        {
            f = f* j;
        }
        B[i] = f;
    }



}

int main (){
    int x;
    int vetorA[10],vetorB[10];


    for (x=0; x<10; x++) {
        cout << "Digite o valor do vetor "<<x+1<<": ";
        cin >>vetorA[x];

    }
        cout <<"\n"<<endl;
    fatorial(vetorA,vetorB);
    for (x=0; x<10; x++) {
        cout << "B[" <<x<<"] = " << vetorB[x]<< endl;
    }

}
