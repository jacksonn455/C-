#include<iostream>
using namespace std;
int main() {

int v,n[10],i;


    cin >> v;
    n[0] = v;

    for(i=1;i<10;i++){
        n[i] = n[i-1]*2;
        cout << "N[" << i<< "] = " << n[i]<<endl;
    }

    return 0;
}
