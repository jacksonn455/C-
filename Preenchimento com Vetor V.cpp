#include<iostream>
#include<iomanip>
using namespace std;
int main(){

int i=0;
double s[100],x=0;

cin >> x;

double den=100;
int cont =0;

for(i=1; den>=4; i++) {
s[cont] = (x * i) / den;
    den = den - 4;
    cont ++;
    }


for(i=18; i>=0; i=i-2) {
    cout << fixed << setprecision(2);
    cout << "S[" << i <<"] = "<<s[i]<<endl;
}
}
