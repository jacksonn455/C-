#include <iostream>
using namespace std;
int maior(int *vetor, int n){
    int m=0;
    for(int i=0;i<n;i++){
        if(vetor[i]>m) m = vetor[i];
    }
    return m;
}

int main (){
    int n=10;
    int vet[n];

for (int i=0;i<n;i++) vet [i]=i+1;

cout << "Maior elmento do vetor: "
     << maior(vet, n) << endl;
    return 0;


}
