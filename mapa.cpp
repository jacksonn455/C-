#include<iostream>
#include<map>
#include<cstdio>
using namespace std;
int main(){

map<string,double> mapa_alt;
int n;
string nome;
double altura;
cin >> n;
for(int i=0;i<n;i++){
    cin >> nome >> altura;
    mapa_alt[nome] = altura;
}
cin >> n;

for(int i=0;i<n;i++){
    cin >> nome;
    cout <<"Altura da ";
    cout <<nome << " = "<< mapa_alt[nome] <<endl;
}
return 0;
}
