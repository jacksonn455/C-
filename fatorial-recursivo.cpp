#include <iostream>

using namespace std;

int fat(int n){
    if(n==0) return 1;
    else return n*fat(n-1);
}

int main(){
    int n;

    while(cin >> n){
        cout << "fat(" << n << ") = " << fat(n) << endl;
    }

    return 0;
}
