#include<iostream>
using namespace std;
int main(){

int i,n[1001],x;

    for(i=0;i<1000;i++){
        n[i] = 0; // Inicializar
    }
    for(i=0;i<20;i++){
        cin >> x;
        n[x]++; //counting
    }
    for(i=0;i<=1000;i++){
        if(n[i]!=0){
            cout << i << " aparece " << n[i] << "vez(ez)" <<endl;
        }
    }
}
