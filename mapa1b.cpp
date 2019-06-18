#include<iostream>
#include<map>
#include<cstdio>
using namespace std;
int main(){

map<string,double> mapa;
map<string,double>::iterator it;
int n;
string nome;
double altura;
cin >> n;
for(int i=0;i<n;i++){
    cin >> nome >> altura;
    mapa[nome] = altura;
}
cin >> n;

for(int i=0;i<n;i++){
    cin >> nome;
    if(mapa.find(nome) != mapa.end()){
    cout <<"Altura da ";
    cout <<nome << " = "<< mapa[nome] <<endl;
    } else {
    cout << nome << " nao esta presente no mapa!" <<endl;
    }
}
for(it=mapa.begin();it!=mapa.end();it++){
    cout << it->first << endl;
}
return 0;
}
