#include<iostream>
using namespace std;
int main() {

    int n,m[70][70];

    while(cin >> n) {
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                m[i][j] = 3;
                if(i==j){
                    m[i][j]=1;
                }
                if(i+j+1==n){
                    m[i][j]=2;
                }
            }
        }
      for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                    cout << m[i][j];
            }
            cout << endl;
    }

    }
    return 0;
}
